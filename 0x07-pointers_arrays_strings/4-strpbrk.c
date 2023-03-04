#include "main.h"

/**
 * _strpbrk - Searches a string for anybof a set of bytes
 *
 * @s: String to be searched
 * @accept: String occurence to search in @s
 *
 * Return: A pointer to the byte in @s that matches one of
 * the bytes in @accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int b, b1;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (b1 = 0; accept[b1] != '\0'; b1++)
		{
			if (s[b] == accept[b1])
			{
				return (s + b);
			}
		}
	}

	return ('\0');
}
