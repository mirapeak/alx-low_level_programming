#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare with
 * @s2: second string to compare with
 * Return: returns 0 if s1 == s2, negative num if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
