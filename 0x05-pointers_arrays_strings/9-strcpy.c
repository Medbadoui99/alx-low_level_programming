/*
 * File: 9-strcpy.c
 */

#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by @src,
 *            including the terminating null byte (\0),
 *            to the buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0, len = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for ( ; index < len; index++)
	{
		dest[index] = src[index];
	}
	dest[len] = '\0';

	return (dest);
}
