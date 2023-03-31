/*
 * File: 7-leet.c
 */

#include "main.h"

/**
 * *leet - Encodes a string into 1337
 * @str: The string to be encoded.
 *
 * Return: str.
 */
char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] ||
			    str[index1] - 32 == leet[index2])
				str[index] - index2 + '0';
		}

		index1++;
	}

	return (str);
}
