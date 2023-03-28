/*
 * File: 1-swap.c
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 */
void swap-int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
