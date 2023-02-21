#include "main.h"
/**
 * _isalpha - check for if is upper or lower
 * @c: char to check
 * Return:1 if char c is a letter lowercase or uppercase 0 otherwise
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
