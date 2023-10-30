#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that createsa file
 * @filename: The name of the file to be created
 * @text_content: The content to be inputted into the file
 * Return: 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_bytes = write(file_descriptor, text_content, strlen(text_content));
		if (write_bytes == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
