#include "main.h"
/**
 * read_textfile - read a text file and print it to
 * PoSIX standard output.
 * @filename: the file to read
 * @letters: number of letters to read
 * Return: number of letters printed | 0 (otherwise)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r;
	char *y;
	ssize_t c;

	if (!filename)
		return (0);
	r = open(filename, O_RDONLY);
	if (r == -1)
		return (0);
	y = malloc(letters);
	if (!y)
		return (0);
	c = read(r, y, letters);
	if (c == -1)
		return (0);
	c = write(STDOUT_FILENO, y, c);
	if (c == -1)
		return (0);

	free(y);
	close(r);
	return (c);
}
