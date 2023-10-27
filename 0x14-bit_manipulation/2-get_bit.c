#include "main.h"

/*
 * get_bit - returns the value of a bit.
 * @n: number.
 * @index: index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index);
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n & 1);
}
