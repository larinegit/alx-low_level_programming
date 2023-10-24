#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
 listint_t *front = head;
 listint_t *back = head;

 if (!head)
 return (NULL);

 while (front && back && back->next)
 {
 back = back->next->next;
 front = front->next;
 if (back == front)
 {
 front = head;
 while (front != back)
 {
 front = front->next;
 back = back->next;
 }
 return (back);
 }
 }

 return (NULL);
}
