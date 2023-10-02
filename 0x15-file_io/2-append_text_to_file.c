#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, write_text;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_text = write(file, text_content, len);
	if (write_text == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
