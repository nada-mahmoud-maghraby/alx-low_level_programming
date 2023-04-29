#include "main.h"
/**
 *more_numbers - prints 10 times numbers from 0 to 14
 *Return: void
 */
void more_numbers(void)
{
	int times;
	int num;
	int check;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			check = num;
			if (num > 9)
			{
				_putchar(1 + 48);
				check = num % 10;
			}
			_putchar(check + 48);
		}
		_putchar('\n');
	}
}
