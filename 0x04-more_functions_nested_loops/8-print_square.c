/*
 * File: 8-print_square.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square using hte character #.
 * @size: size of the square.
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
