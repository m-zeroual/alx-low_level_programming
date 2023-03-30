#include "main.h"
#include <stdlib.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
