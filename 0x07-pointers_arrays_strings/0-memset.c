#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: first char
 * @b: char 2
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
