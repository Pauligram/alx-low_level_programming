#include "main.h"

/*
 * create_file - create file
 * @filename: file
 * @text_content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *_content)
{
	int fd, length = 0;
	if (!filename)
		return (-1);
	fd = open(filename, 0_RDWR | 0_CREAT | 0_TRUNC, 0600);
	if (fd < 0)
		return (-1);
while (content && content[length])
	length++;
if (write(fd, content, length) < 0)
{
	close(fd);
	return (-1)
}
close(fd);
return (1);
}
