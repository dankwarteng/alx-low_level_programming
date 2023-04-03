#include "lists.h"

/**
 * sum_listint - return the sum of all data (n) of a listint.
 * @head: data type pointer the head/next node
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	if (!head)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (sum);
}

