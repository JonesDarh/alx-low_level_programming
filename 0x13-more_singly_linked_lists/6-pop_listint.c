#include "lists.h"

/**
 * pop_listint - deletes the Head node of Linked List.
 * @head: pointer to the first element in the Linked List.
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
