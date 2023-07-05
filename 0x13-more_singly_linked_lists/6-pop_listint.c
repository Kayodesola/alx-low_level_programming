#include "lists.h"
/**
 *pop_listint - deletes the first node of the list
 *@head: pointer to the node
 *
 *Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;


	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
