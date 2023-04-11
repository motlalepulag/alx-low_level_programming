#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: A string containing a binary number
 *
 * Return: An unsigned integer corresponding to the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	char c;
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while ((c = *b++) != '0')
	{
		if (c != '0' && c != '1')
			return (0);
		result = result * 2 + (c -  '0');
	}
	return (result);
}
