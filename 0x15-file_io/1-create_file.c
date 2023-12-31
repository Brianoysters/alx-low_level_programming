#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file pointer.
 * @text_content: string input.
 *
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, txt_len = 0;
	int w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (txt_len = 0; text_content[txt_len];)
			txt_len++;
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_descriptor, text_content, txt_len);

	if (file_descriptor == -1 || w == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
