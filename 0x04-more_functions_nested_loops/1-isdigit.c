#include "main.h"

/**
 * _isdigit - A function that checks for digits.
 * @c: An input character
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
