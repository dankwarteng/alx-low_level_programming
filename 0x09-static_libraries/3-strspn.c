#include "main.h"

/**
 * _strspn - Gets the lenght of a prefix substring
 *
 * @s: Initial segment of string
 * @accept: Prefix of string to be measured
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found_match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break;
			}
		}

		if (found_match != 1)
			break;

		len++;
	}

	return (len);
}
