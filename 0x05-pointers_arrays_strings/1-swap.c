#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: is the first integer
 *@b: is the second integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
