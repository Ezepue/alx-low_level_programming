#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
void close_file(int fd);

int main(int argc, char *argv[]) {
	int from_fd, to_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* Open source file for reading */
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*Open destination file for writing (create or truncate)*/
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close_file(from_fd);
		exit(99);
	}

	/*Read from source and write to destination until EOF*/
	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close_file(from_fd);
			close_file(to_fd);
			exit(99);
		}
	}

	/*Error while reading from source*/
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		close_file(from_fd);
		close_file(to_fd);
		exit(98);
	}

	/*Close both files*/
	close_file(from_fd);
	close_file(to_fd);

	return 0;
}

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
