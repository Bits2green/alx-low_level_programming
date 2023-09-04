#include "main.h"

/**
 * copy_file - copies the content of a file to another file.
 * @code:
 * @message:
 *
 *Return: 
 */

void exit_with_error(int code, const char *message)
{
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code); }

int main(int argc, char *argv[]) 
{
	const char *file_from;
	const char *file_to;
	int fileDto;
	int fileDfrom;
	char buffer[BUF_SIZE];
        ssize_t bytesR;

	if (argc != 3)
	{
	    exit_with_error(97, "Usage: cp file_from file_to"); }
	file_from = argv[1];
	file_to = argv[2];
	fileDfrom = open(file_from, O_RDONLY);
	if (fileDfrom == -1)
	{
		exit_with_error(98, "Can't read from file"); }
	fileDto = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileDto == -1) 
	{
		close(fileDfrom);
		exit_with_error(99, "Can't write to file"); }
	while ((bytesR = read(fileDfrom, buffer, BUF_SIZE)) > 0)
	{
		ssize_t bytesW = write(fileDto, buffer, bytesR);
		if (bytesW == -1)
		{
			close(fileDfrom);
			close(fileDto);
			exit_with_error(99, "Can't write to file"); } }
	if (bytesR == -1)
	{
		close(fileDfrom);
		close(fileDto);
		exit_with_error(98, "Can't read from file"); }
	if (close(fileDfrom) == -1 || close(fileDto) == -1)
	{
		exit_with_error(100, "Can't close file descriptor"); }
	return 0; }
