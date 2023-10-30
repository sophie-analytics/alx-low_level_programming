#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - read the a specified no of content in a file
 * @filename: The name of the file to be read
 * @letters: The no of letters to be read
 * Return: The no of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *read_ptr;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	read_ptr = malloc(letters);
	if (read_ptr == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	read_bytes = read(file_descriptor, read_ptr, letters);

		if (read_bytes < 0)
		{
			free(read_ptr);
			close(file_descriptor);
			return (0);
		}
	write_bytes = write(STDOUT_FILENO, read_ptr, read_bytes);
		if (write_bytes < 0 || write_bytes != read_bytes)
		{
			free(read_ptr);
			close(file_descriptor);
			return (0);
		}
	free(read_ptr);
	close(file_descriptor);
	return (read_bytes);
}
