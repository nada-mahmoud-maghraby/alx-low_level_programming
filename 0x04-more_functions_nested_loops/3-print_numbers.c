#include "main.h"
/**
 *print_numbers - prints the numbers from 0 to 9
 *using _putchar twice
 *Return: void
 */
void print_numbers(void)
{
	int x = 0;

	do {
		_putchar(x + 48);
		x++;
	} while (x >= 0 && x <= 9);
	_putchar('\n');
}
