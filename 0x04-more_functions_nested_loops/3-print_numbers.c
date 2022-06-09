#include "main.h"

/**
 * print_numbers - A function that prints digits 0 - 9.
 * Return: 0
 */

int print_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
