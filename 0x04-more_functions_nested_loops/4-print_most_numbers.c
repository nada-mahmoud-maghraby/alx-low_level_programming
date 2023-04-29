#include "main.h"
/**
 *print_most_numbers - prints the number from 0 to 9
 *don't print 2 and 4
 *Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
