#include "main.h"
#include <stdio.h>

/**
 * print_array - Swaps integers wih pointers.
 *
 * @a: is a pointer to a char
 *
 * @n: is an int
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int j;

	for (j = 0; j <= (n - 1); j++)
	{
		if (j != n - 1)
		printf("%d, ", a[j]);
		else
		printf("%d", a[j]);
	}
printf("\n");
}
