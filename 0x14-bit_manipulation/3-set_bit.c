#include "main.h"

/*
 * Set_bit -sets the value of a bit.
 * @n: number.
 * @index: index.
 * Return: 1 if it worked, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int paul = 1 << index;

	if (index > (sizeof((*n)) * 44))
		return (-1);
	*n = *n | paul;
	return (1);
}
