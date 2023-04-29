#include "main.h"
/**
 * print_triangle - print a triangle aligned right, using '#'
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	y = size - 1;

	for (x = 0; x < size; x++)
	{
		y = size - 1 - x;
		z = x + 1;
		for ( ; y > 0; y--)
			_putchar(' ');
		for ( ; z > 0; z--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
