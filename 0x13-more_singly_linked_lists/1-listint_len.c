#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnt = 0;

	tp = h;
	while (tp)
	{
		cnt++;
		tp = tp->next;
	}
	return (cnt);
}
