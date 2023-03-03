#include "main.h"
#include <stdio.h>

/**
 * print_array -function that prints n element of an array of integers
 *
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		printf("i%d", a[i]);
		if (i < n - 1)
			printf(",");
	}
	printf("\n");
}

