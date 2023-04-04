#include "lists.h"

/**
 * free_listint - .
 * @head: .
 * Return: .
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
