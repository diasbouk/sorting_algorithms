#include "sort.h"

/**
 * insert_dnodeint_at_index - Inserts a node at index
 * @h: Adress of the head
 * @idx: index to insert node in
 * @n: Number to assign to new node inserted
 * Return: Adress of new node. NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **h, int idx, const int n)
{
	listint_t *new_node = calloc(1, sizeof(listint_t));
	listint_t *temp;
	int i = 0;

		temp = *h;
		if (idx == 0)
			add_nodeint(h, n);
		while (temp && i < idx)
		{
			temp = temp->next;
			i++;
		}
		if (temp->next == NULL)
			new_node = add_nodeint_end(h, n);
		else
		{
			new_node->prev = temp->prev;
			new_node->n = n;
			new_node->next = temp;
			temp->prev = new_node;
		}
		return (new_node);
}
