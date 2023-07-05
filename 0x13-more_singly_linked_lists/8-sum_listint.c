#include "lists.h"
/**
 *sum_listint - sums all tha data in the list
 *@head: pointer of the nodes
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
