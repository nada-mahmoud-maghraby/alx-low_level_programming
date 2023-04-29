#include "main.h"
/**
 *print_line - draws a straight line in the terminal.
 *@n: is the number of times the character _ should be printed
 *Return: void
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x =  1; x <= n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
