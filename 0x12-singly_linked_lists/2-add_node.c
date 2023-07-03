#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *add_node - Adds an node at the beginning
 *@head: head pointer
 *@str: string pointer
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
