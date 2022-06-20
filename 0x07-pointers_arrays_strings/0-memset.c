#include "main.h"
/**
 * _memset - fills the memory of the array with n bytes
 * @first-Arg: first argument
 * @sec-Arg: second argument
 * @third-Arg: third argument
 *
 * Description: return the required result
 * Return: return a char pointer
 */
 
char *_memset(char *first_Arg, char sec-Arg, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		first-Arg[i] = sec-Arg;
	}

	return (first-Arg);
}
