#include "sort.h"
/**
* insertion_sort_list - sorts a doubly linked list
* of integers in ascending order using the Insertion sort algorithm
* @list: ptr->list
* Return: Nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *other, *temp, *var;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (other = (*list)->next; other != NULL; other = other->next)
	{
		temp = other;
		var = other->prev;

		while (var != NULL && (var->n > other->n))
		{
			if (temp->next != NULL)
				temp->next->prev = var;
			var->next = temp->next;
			temp->next = var;
			temp->prev = var->prev;
			var->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			print_list(*list);
			var = temp->prev;
		}
	}
}
