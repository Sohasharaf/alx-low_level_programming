#include"main.h"

/**
 * _strncat - function concatenate two strings
 * using at most bytes from src
 * @dest: entered value
 * @src: entered value
 *
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int n;
	int b;

	a = 0;
	while (dest[a] != '\0\)
			{
			a++;
			}
			b = 0;
			while (b < n && src[b] != '\0')
			{
			dest[a] = src[b];
			a++;
			b++;
			}
			dest[a] = '\0';
			return (dest);
			}
