/*
 * File: 0-memset.c
 */

#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: starting address of memory to be filled.
 * @b: the desired value.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
