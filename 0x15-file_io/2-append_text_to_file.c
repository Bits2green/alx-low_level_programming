#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add to file
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	int bytesW;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fileD = open(filename, O_WRONLY | O_APPEND);

	if (fileD == -1)
	{
		return (-1);
	}

	bytesW = write(fileD, text_content, strlen(text_content));
	close(fileD);

	if (bytesW == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

