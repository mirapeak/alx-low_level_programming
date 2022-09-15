#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: tested character
 * Return: 1 if it is, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 59))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
