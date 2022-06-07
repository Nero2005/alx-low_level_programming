#include "holberton.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase followed by a new line
 * Return. Nothing
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
