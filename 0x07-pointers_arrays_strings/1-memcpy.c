#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area
 * @storedMemory: memory stored
 * @copyMemory: memory copied
 * @n: number of bytes
 * Return: copied memory and the number of bytes changed
 *
 */

char *_memcpy(char *storedMemory, char *copyMemory, unsigned int n)

{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		storedMemory[a] = copyMemory[b];
		a++;
		b++;
		n--;
	}
	return (storedMemory);
}
