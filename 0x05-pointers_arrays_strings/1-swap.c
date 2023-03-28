#include "main.h"

/**
 * swap_int - swaps integers with pointers.
 *
 * @a: is pointer to an int.
 * @b: is pointer to an int.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
