#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *_memset(char *s, char b, unsigned int n)
	{
	unsigned int x = 0;

	while (x < n)
	{
	s[x] = b;
	x++;
	}

	return (s);
}
}

