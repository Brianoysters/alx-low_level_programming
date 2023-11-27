#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * checkFileError - checks if files can be opened.
 * @sourceFile: source file descriptor.
 * @destinationFile: destination file descriptor.
 * @args: command-line arguments vector.
 */
void checkFileError(int sourceFile, int destinationFile, char *args[])
{
	if (sourceFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (destinationFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sourceFile, dsFile, closeError;
	ssize_t numChars, numWritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	sourceFile = open(argv[1], O_RDONLY);
	dsFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkFileError(sourceFile, dsFile, argv);

	numChars = 1024;
	while (numChars == 1024)
	{
		numChars = read(sourceFile, buffer, 1024);
		if (numChars == -1)
			checkFileError(-1, 0, argv);
		numWritten = write(dsFile, buffer, numChars);
		if (numWritten == -1)
			checkFileError(0, -1, argv);
	}

	closeError = close(sourceFile);
	if (closeError == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sourceFile);
		exit(100);
	}

	closeError = close(dsFile);
	if (closeError == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dsFile);
		exit(100);
	}
	return (0);
}
