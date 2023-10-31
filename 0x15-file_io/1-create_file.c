#include "main.h"

/*
 * create_file - create a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to the string to write to the file
 * Return: If function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int length = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
while (text_content && text_content[length])
	length++;
if (write(fd, text_content, length) < 0)
{
	close(fd);
	return (-1);
}
close(fd);
return (1);
}
