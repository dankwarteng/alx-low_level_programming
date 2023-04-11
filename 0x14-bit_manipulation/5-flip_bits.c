#include "main.h"

/**
* flip_bits - bits you would need to flip to get from one number to another
* @n: Number to  flip.
* @m: Number to  flip.
* Return: returns the number of bits you would need to flip.
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = 0, count = 0;
	unsigned int i;
        
		
	number = n ^ m;
	for (i = n ^ m; i > 0; i++)
	{
		if (i & 1)
		count++;
	number >>= 1;
	}

	return (count);
}


