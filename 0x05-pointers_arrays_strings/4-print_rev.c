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
	int l = strlen(s), i;

	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
