#include "main.h"

/**
 *swap_int - swap values of the two integers
 *@a: pointer to first integer
 *@b: pointer to second integer
 *
 *return: (0)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
