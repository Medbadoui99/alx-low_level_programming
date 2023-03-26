/*
 * File: 4-print_most_numbers.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9,
 *                      do not print 2 and 4.
 *
 */
void print_most_numbers(void)
{
	int num;
	for (num = 0; num <= 9; num++)
	{
		while (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
