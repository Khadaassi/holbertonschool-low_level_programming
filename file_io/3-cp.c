#include "main.h"
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 *
 * Return: 0 on success, exits with specific codes on failure.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written, close_status;
	char buffer[BUF_SIZE];

	if (file_from == NULL || file_to == NULL)
		exit_with_error(97, "Usage: cp file_from file_to\n");

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
S_IRGRP | S_IROTH);
	if (fd_to == -1)
		exit_with_error(99, "Error: Can't write to %s\n", file_to);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			exit_with_error(99, "Error: Can't write to %s\n", file_to);
	}

	if (bytes_read == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", file_from);

	close_status = close(fd_from);
	if (close_status == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", fd_from);

	close_status = close(fd_to);
	if (close_status == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
/**
 * exit_with_error - Exits the program with an error message.
 * @exit_code: The exit code.
 * @format: The error message format.
 * @...: Additional parameters for the format.
 */
void exit_with_error(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
