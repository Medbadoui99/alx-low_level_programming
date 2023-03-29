/*
 * File: 4-print_rev.c
 */

#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string, in reverse.
 * @s: string to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
