#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, close_status;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}
