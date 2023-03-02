#include "main.h"

/**
 *  _strncpy - C function that copies a string, including the
 *  terminating null byte, using at most an inputted number of bytes.
 */



char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
