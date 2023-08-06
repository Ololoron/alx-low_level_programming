#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the first element of the list
 * @index: index of thr node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *temp, *eraser;

	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (count != index)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		count++;
	}

	eraser = temp->next->next;
	free(temp->next);
	temp->next = eraser;

	return (1);
}
