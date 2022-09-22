#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: maximum number of byte copied
 * Return: returns pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
