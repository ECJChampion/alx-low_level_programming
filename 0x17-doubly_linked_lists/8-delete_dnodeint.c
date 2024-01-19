#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (*head == NULL) {
        // If the list is empty, deletion is not possible
        return -1;
    }

    dlistint_t *current = *head;

    // If the node to be deleted is the head
    if (index == 0) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;
    }

    // Traverse to the node at the given index
    for (unsigned int i = 0; current != NULL && i < index; i++) {
        current = current->next;
    }

    // If the index is out of bounds
    if (current == NULL) {
        return -1;
    }

    // Adjust pointers to remove the node from the list
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    // Free the memory of the node
    free(current);

    return 1;
}

 
