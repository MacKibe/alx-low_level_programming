#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: lenghth of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
