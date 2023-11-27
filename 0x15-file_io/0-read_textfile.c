#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: character to read letters
 * Return: 0 when file name is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t words_written;
	ssize_t words_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	words_read = read(file_descriptor, buffer, letters);
	words_written = write(STDOUT_FILENO, buffer, words_read);

	free(buffer);
	close(file_descriptor);
	return (words_written);
}
