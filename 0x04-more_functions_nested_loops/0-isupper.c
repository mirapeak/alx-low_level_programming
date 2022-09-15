#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be tested
 * Return: 1 if it is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
