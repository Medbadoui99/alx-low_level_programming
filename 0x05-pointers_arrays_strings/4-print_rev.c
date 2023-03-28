/*
 * File: 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: string to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, index;
	
	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
	{
		s[index] = s[len - 1];
		_putchar(s[index]);
	}

	_putchar('\n');
}
