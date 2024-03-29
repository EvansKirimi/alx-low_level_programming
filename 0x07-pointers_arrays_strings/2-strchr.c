#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string to check from
 * @c: char to check
 * Return:- a pointer to the first occurrence of the char c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
