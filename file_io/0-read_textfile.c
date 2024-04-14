#include "main.h"

/**
 * read_textfile - reads file content
 * @filename: THe file to read
 * @letters: number of letters to read and print
 *
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);

	return (rd);
}
