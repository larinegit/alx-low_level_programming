#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;
    dlistint_t *temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
}
