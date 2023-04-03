include "lists.h"

/**
 * reverse_listint - function that reverses listint.
 * @head: data type double pointer the head/next node
 * Return: new_node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *post_node;
	listint_t *old_node = NULL;
	while (head && *head)
	{
		post_node = (*head)->next;
		old_node = *head;
		*head = post_node;
		(*head)->next = old_node;
		}
	*head = old_node;
	return (*head);
}

