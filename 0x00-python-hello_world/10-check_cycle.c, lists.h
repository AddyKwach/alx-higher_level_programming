#include <stdlib.h>
#include <stdio.h>

/* Definition for singly-linked list. */
struct listint_s {
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

/**
 * check_cycle - Checks if a singly linked list has a cycle.
 * @list: A pointer to the head of the linked list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list) {
    listint_t *tortoise, *hare;

    if (list == NULL || list->next == NULL)
        return 0;

    tortoise = list;
    hare = list->next;

    while (tortoise != hare) {
        if (hare == NULL || hare->next == NULL)
            return 0;

        tortoise = tortoise->next;
        hare = hare->next->next;
    }

    return 1;
}

/* Example usage */
int main(void) {
    listint_t *head, *node1, *node2, *node3;

    /* Creating a linked list with a cycle */
    head = malloc(sizeof(listint_t));
    node1 = malloc(sizeof(listint_t));
    node2 = malloc(sizeof(listint_t));
    node3 = malloc(sizeof(listint_t));

    if (!head || !node1 || !node2 || !node3) {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }

    head->n = 1;
    head->next = node1;
    node1->n = 2;
    node1->next = node2;
    node2->n = 3;
    node2->next = node3;
    node3->n = 4;
    node3->next = node1; /* Creating a cycle */

    /* Check for cycle */
    if (check_cycle(head))
        printf("The linked list has a cycle\n");
    else
        printf("The linked list does not have a cycle\n");

    /* Freeing memory */
    free(head);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
