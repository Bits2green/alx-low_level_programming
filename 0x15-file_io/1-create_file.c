#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: string to write to the file (ends with '\0')
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fileD;
	int bytesW;

	fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
	{
		return (-1);
	}

	if (fileD == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytesW = write(fileD, text_content, strlen(text_content));

		if (bytesW == -1)
		{
			close(fileD);
			return (-1);
		}
	}

	close(fileD);

	return (1);
}
