#include "lists.h"



/**

* delete_nodeint_at_index - deletes the node at the index of listint.

* @head: data type pointer the head/next node

* @index: data type unsigned int index

* Return: 1 if succed and -1 if fail

*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{

unsigned int count = 0;

listint_t *tmp_node = *head;

listint_t *idx_node;



if (tmp_node && (!index))

{

*head = tmp_node->next;

free(tmp_node);

return (1);

}

while (tmp_node)

{

if (count + 1 == index)

{

idx_node = tmp_node->next;

if (idx_node)

{

tmp_node->next = idx_node->next;

free(idx_node);

return (1);

}

}

tmp_node = tmp_node->next;

count++;

}

return (-1);

}

