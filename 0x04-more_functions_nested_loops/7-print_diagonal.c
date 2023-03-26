/*
 * File: 7-print_diagonal.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; space++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');
				
			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
