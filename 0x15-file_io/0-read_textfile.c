#include "main.h"

/**
 * read_textfile - Read txt file then print to POSIX standard output
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: actual no. of letters it could read and print, 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	rcount = read(fd, buf, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buf);

	close(fd);
	return (wcount);
}
