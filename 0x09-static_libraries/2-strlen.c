#include "main.h"
/**
 *_strlen - returns the length of a string.
 *@s : is a variable
 *Return: the length of the variable
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
