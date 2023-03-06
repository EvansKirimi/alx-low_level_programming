#include "main.h"
/**
 * _strstr -  function finds the first occurrence of the substring needle
 * @haystack: string to check in
 * @needle: substring to check
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
