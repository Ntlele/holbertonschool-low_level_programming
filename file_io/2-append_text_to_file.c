#include "main.h"

/**
 * append_text_to_file - adds text to the end of the file
 * @filename: name of the file to append text to
 * @text_content: text to add
 *
 *Return: returns 1 if text added or -1 if not added
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, count_c = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count_c])
			count_c++;

		wrt = write(fd, text_content, count_c);
		if (wrt == -1)
			return(-1);
	}
	close(fd);
	return (1);
}
