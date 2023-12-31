#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: Name of file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *ch;
	ssize_t read_text, write_text;

	if (filename == NULL)
		return (0);

	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(ch);
		return (0);
	}

	read_text = read(file, ch, letters);
	if (read_text == -1)
	{
		free(ch);
		close(file);
		return (0);
	}

	write_text = write(STDOUT_FILENO, ch, read_text);
	if (write_text == -1)
	{
		free(ch);
		close(file);
		return (0);
	}

	free(ch);
	close(file);
	return (write_text);
}
