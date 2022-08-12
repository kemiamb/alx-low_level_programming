#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node at the end of the list
 * @head: head of the list
 * @str: string to be added
 * Return: address of the new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *f;


	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = new;
		return (new);
	}
}
