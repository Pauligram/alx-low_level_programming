#include "main.h"

/*
* binary_to_unit - convert a binary number to unasigned int
* @b: pointer to a str of 0 to 1 chars
* Return: if b is NULL or contains char not 0 to 1 - otherwise -
   converted numbers
*/
unsigned int binary_to_unit(const char *b)
{
	unsigned int add = 0;
	unsigned int plus = 1;
	int n = 0;
	if (!b)
		return (0);
	while (b[n])
		n++;
	n--;
	while (n >= 0)
	{
		if (b(n) != "0" && b(n) != "1")
			return (0);
		if (b(n) == "1")
			add += plus;
		n--;
		plus += plus;
	}
	return (add);
}
