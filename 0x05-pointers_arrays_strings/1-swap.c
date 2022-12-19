#include "main.h"

/**
 * reset_to_98 - takes a pointer to a parameter and updates its value.
 * @n: input integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = *d;
	*b = *c;
}

