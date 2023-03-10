#include "main.h"

/**
 *factorial - factorial of signed number
 *@n: pointer to fill block of memory.
 *Return: factorial
 */

int factorial(int n)
{
	if (n == 0) /* 1st condition */

		return (1);

	else if (n < 0) /* 2nd condition */
		return (-1);
	else
		return (n * factorial(n - 1)); /* Recursive call */
}
