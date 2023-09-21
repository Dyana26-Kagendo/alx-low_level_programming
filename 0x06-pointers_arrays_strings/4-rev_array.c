#include "main.h"

/**
 *reverse_array - reverse the content of array of integers
 *@a: pointer to array of integers
 *@n: number of parameters in array
 *
 *Descriptiin: takes an array of integers and its size and
 *it reverses the order of element in array
 *
 */

void reverse_array(int *a, int n)
{
	int i, len;

	for (i = 0; i < n / 2; i++)
	{
		len = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = len;
	}
}
