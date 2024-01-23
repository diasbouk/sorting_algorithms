#include "sort.h"

/**
 * insertion_sort_list  - sorts a d_linked list
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	int tmp;

	if (list == NULL)
		return;
	current = *list;
	while (current)
	{
		while (current)
		{
			if (current->next && current->n > current->next->n)
			{
				tmp = current->n;
				*(int *)&current->n = current->next->n;
				*(int *)&current->next->n = tmp;
				current = *list;
				print_list(*list);
				break;
			}
			current = current->next;
		}
	}
}
