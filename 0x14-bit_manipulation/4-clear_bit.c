#include "main.h"

/*
 * Clear_bit - set the value.
 * @n: number.
 * @index: index, starting from 0
 * Return: 1 if it worked.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 24) - 1))
		return (1);
			*n &= ~(1 << index);
			return (1);
}
