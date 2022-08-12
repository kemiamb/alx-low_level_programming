#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add a new node at the beginning of the list
 * @head: head of the list
 * @str: the  new element added
 * Return: address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	int i = 0;


	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
