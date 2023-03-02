#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: string to encode
 * Return: address of x
 */
char *leet(char *x)
{
	int y, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; *(x + y); y++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (a[z] == x[y])
				x[y] = b[z];
		}
	}
	return (x);
}
