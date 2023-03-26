/*
 * File: 6-print_line.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal, the line should end with a \n.
 * @n: the number of times the character _ should be printed.
 *
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
