#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: first int
 * @n: number of elements in the array
 * Return : 0
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y;

	while (x < (n - 1) / 2)
	{
	y = a[x];
	a[x] = a[n - 1 - x];
	a[n - 1 - x] = y;
	x++;
	}

}

