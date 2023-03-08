#include "main.h"

/**
 *_pow_recursion - the functions returns the value of x
 *                  raised to the power of y.
 *@x: integer
 *@y: integer
 *Return: On success returns pow recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* 1st condition */
	{
		return (-1);
	}

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1)); /* Recursive call */

	else
		return (1);
}
