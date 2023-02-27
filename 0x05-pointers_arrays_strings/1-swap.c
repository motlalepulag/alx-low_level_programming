#include "main.h"

/**
 * swap_int - swap variable value
 * @a: pointera
 * @b: pointerb
 * Return: void
 */
void sawp_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
