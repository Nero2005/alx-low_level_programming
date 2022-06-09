#include "main.h"

/**
 * print_line - A function that prints digits 0 - 9 except 2 and 4.
 * Return: 0
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
