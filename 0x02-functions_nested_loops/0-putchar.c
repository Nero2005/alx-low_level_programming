#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		write(1, word[i], 1);
	write(1, '\n', 1);

	return (0);
}
