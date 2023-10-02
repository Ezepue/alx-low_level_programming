#include "main.h"

/**
 * create_file - creates a file with specific permissions
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_count;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		write_count = write(fd, text_content, len);
		if (write_count == -1 || write_count != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
