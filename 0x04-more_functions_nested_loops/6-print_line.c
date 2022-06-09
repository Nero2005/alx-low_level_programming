#include "main.h"

/**
 * print_line - A function that prints digits 0 - 9 except 2 and 4.
 * Return: 0
 */

void print_line(int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	if (i > 0)
		_putchar('\n');
}
