#include "main.h"
/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int r;
	ssize_t c;

	if (!filename)
		return (-1);
	r = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (r == -1)
		return (-1);
	if (!text_content)
		return (1);
	c = write(r, text_content, strlen(text_content));
	if (c == -1)
		return (-1);
	close(r);
	return (1);
}
