#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number to evaluate.
 * @index: index starting from 0 of the bit you want to ge.
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > (sizeof(unsigned long int) * 8))
return (-1);
bit = ((n >> index) & 1);
return (bit);
}
