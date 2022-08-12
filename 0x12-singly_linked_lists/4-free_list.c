#include <stdio.h>
#include< stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_lists - frees a list 
 * @head: head of the list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
