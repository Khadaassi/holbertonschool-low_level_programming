#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
    char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytesWritten);
}
