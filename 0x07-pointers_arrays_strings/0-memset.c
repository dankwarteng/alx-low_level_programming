#include <stdio.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Array to be filled
 * @b: Constant to be filled with
 * @n: Bytes of memory to fill
 *
 * Return: A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
