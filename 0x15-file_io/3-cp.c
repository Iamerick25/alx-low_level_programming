#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 if it fails
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, read_text, write_text;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_text = read(fd_from, buff, 1024)) > 0)
	{
		write_text = write(fd_to, buff, read_text);
		if (write_text == -1)
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]), exit(99);
	}

	if (read_text == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
