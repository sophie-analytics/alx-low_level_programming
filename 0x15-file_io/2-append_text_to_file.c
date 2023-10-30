#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - To append text to a file content
 * @filename: The file
 * @text_content: The text to be appended
 * Return: 1 for success for -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	write_bytes = write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);

	if (write_bytes == -1)
	{
		return (-1);
	}

	return (1);
}
