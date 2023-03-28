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
	int len = *s, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
