#include "sort.h"

/**
  * insertion_sort_list - function that sorts a double
  * linked list of integers in ascending order
  * using the insertion sort algorithm
  * @list: double linked list to be sorted
  * Return: void function
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *temp = NULL, *_temp_prev = NULL;

	if (list == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		temp = current;
		_temp_prev = temp->prev;
		while ((_temp_prev != NULL) && (temp->n < _temp_prev->n))
		{
			_temp_prev->next = temp->next;
			temp->prev = _temp_prev->prev;
			_temp_prev->prev = temp;
			temp->next = _temp_prev;
			if (temp->prev != NULL)
			{
				temp->prev->next = temp;
			}
			else
				*list = temp;

			if (_temp_prev->next != NULL)
				_temp_prev->next->prev = _temp_prev;

			print_list(*list);
			_temp_prev = temp->prev;
		}
		current = current->next;
	}
}

