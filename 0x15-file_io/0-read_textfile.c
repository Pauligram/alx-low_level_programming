#include "main.h"
/*
 * READ_textfile - read a text file
 * @filename: the file to open
 * @letters: number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	ssize_t paul = 0;
	char *buf;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	paul = read(fd, buf, letters);
	if (paul < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}
	paul = write(STDOUT_FILENO, buf, paul);
	free (buf);
		close (fd);
	if (paul < 0)
		return (0);
	return (paul);
}
