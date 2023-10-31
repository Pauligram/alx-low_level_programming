#include "main.h"

/*
 * create_file - create file
 * @filename: file
 * @text_content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *m_content)
{
	int fd = 0;
	int length = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
while (m_content && m_content[length])
	length++;
if (write(fd, m_content, length) < 0)
{
	close(fd);
	return (-1);
}
close(fd);
return (1);
}
