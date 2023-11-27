#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 * @filename: file pointer
 * @text_content: string input
 * Return: -1 if NULL
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opened_file, written_file, txt_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (txt_len = 0; text_content[txt_len];)
			txt_len++;
	}

	opened_file = open(filename, O_WRONLY | O_APPEND);
	written_file = write(opened_file, text_content, txt_len);

	if (opened_file == -1 || written_file == -1)
		return (-1);

	close(opened_file);

	return (1);
}
