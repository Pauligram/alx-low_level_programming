#include "main.h"
/*
 * get_endianness
 * Return: 1 if 0 is little
 */
int get_endianness(void)
{
	int i = 1;
	return ((int) (((char *)&i)[0]));;
}
