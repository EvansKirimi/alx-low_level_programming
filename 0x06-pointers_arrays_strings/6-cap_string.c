#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @x : string to check
 * Return: address of x
 */
char *cap_string(char *x)
{
	int y = 0;
	int z;
	char w[] = " \t\n,;.!?\"(){}";

	while (*(x + y))
	{
		if (*(x + y) >= 'a' && *(x + y) <= 'z')
		{
			if (y == 0)
				*(x + y) -= 'a' - 'A';
			else
			{
				for (z = 0; z <= 12; z++)
				{
					if (w[z] == *(x + y - 1))
						*(x + y) -= 'a' - 'A';
				}
			}
		}

		y++;
	}
	return (x);
}
