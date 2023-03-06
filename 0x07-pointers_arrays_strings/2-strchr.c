#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string to check from
 * @c: char to check
 * Return:- a pointer to the first occurrence of the char c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
			return (NULL);
	}
}
