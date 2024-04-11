#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                        in ascending order using Insertion sort.
 *
 * @list: A pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *new_node, *prev_node, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		new_node = current->next;
		prev_node = current->prev;

		while (prev_node != NULL && prev_node->n > current->n)
		{
			/* Swap nodes */
			if (prev_node->prev != NULL)
				prev_node->prev->next = current;
			if (current->next != NULL)
				current->next->prev = prev_node;

			prev_node->next = current->next;
			current->prev = prev_node->prev;

			current->next = prev_node;
			prev_node->prev = current;

			/* Adjust pointers */
			if (current->prev == NULL)
				*list = current;
			if (prev_node->next != NULL)
				prev_node->next->prev = prev_node;

		/* Move to the previous node */
			prev_node = current->prev;
			print_list(*list);
		}
		current = new_node;
	}
}
