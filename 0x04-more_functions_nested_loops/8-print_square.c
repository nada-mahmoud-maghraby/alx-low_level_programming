#include "main.h"
/**
 *print_square - print a square
 *@size: size of square
 *Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
