#include "main.h"
/**
 * leet - encodes a string into 1337.
 * letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *leet(char *s)
{
	int stringCount, leetCount;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (letters[leetCount] == s[stringCount])
			{
				s[stringCount] = nums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
