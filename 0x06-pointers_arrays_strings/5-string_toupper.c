#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase
 * @x: string to check
 * Return:0
 */

char *string_toupper(char *x)
{
	int y = 0;

	while (*(x + y))
	{
		if (*(y + x) >= 'a' && *(x + y) <= 'z')
			*(x + y) -= 'a' - 'A';
		y++;
	}
	return (x);
}
