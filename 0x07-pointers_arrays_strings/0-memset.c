#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @f: first char
 * @s: second char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *f, char s, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		f[i] = s;
	}
	return (f);
}
