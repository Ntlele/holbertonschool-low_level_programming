#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file created
 * @text_content: content to fill in the file
 *
 * Return: return 1 if file created or -1 if not created
 */


int create_file(const char *filename, char *text_content)
{
	int fd, count_c = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count_c])
			count_c++;

		write(fd, text_content, count_c);
	}
	close(fd);
	return (1);
}


