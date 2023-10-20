#include "lists.h"
#include "stdlib.h"
/**
 * add_node - adds node
 * @head: head of node
 * @str: string to store
 * Return: the address of the new element, or NULL if it failed
 *
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *nodenew;
	unsigned int t, count = 0;

	nodenew = malloc(sizeof(list_t));
	if (nodenew == NULL)
		return (NULL);
	nodenew->str = strdup(str);
	for (t = 0; str[t] != "\o"; t++)
		count++;
	nodenew->len = count;
	nodenew->next = *head;
	*head = nodenew;
	return (*head);
}
