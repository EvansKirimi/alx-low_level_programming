#include "main.h"
/**
* print_rev -  printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int x;
	int y = 0;

	while (s[y] != '\0')
		y++;

	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
