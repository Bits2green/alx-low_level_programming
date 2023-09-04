#include "main.h"

/**
 * read_textfile - read and prints file contents to POSIX stdout.
 * @filename: name of the text file.
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD; /* Variable to store the file descriptor */
	ssize_t bytesR; /* Variable to store No. of bytes read. */
	char *buffer; /* Buffer pointer to store read content. */
	ssize_t bytesW; /* Printing the read content in stdout */

	buffer = malloc(letters);

	fileD = open(filename, O_RDONLY);

	bytesR = read(fileD, buffer, letters);

	bytesW = write(STDOUT_FILENO, buffer, bytesR);

	if (fileD == -1)
	{
		perror("failed to open!");
		return (-1); }

	if (buffer == NULL)
	{
		perror("malloc failed!");
		close(fileD);
		return (-1); }

	if (bytesR == -1)
	{
		perror("failed to read!");
		free(buffer);
		close(fileD);
		return (-1); }

	if (bytesW == -1)
	{
		perror("failed to write!");
		free(buffer);
		close(fileD);
		return (-1); }

	free(buffer);
	close(fileD);
	return (bytesW); }
