#include "main.h"
/**
 * _strcat -  function that concatenates two strings.
 * @dest: string at the begining
 * @src: string to be added at the end
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	char *final = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;

	}

	*dest = '\0';

	return (final);
}
