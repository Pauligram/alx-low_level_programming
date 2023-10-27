#include "main.h"
/*
 * flip-bits
 * flip to get
 * @n: number.
 * @m: another.
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int paul = (sizeof(n) * 8);
	int gbeke = 0;
	while (paul--)
		gbeke += (n >> paul & 1) != (m >> paul & 1);
	return (gbeke);
}
