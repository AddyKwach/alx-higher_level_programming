#include <stdio.h>
#include <stdlib.h>

/* Definition for singly-linked list */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * check_cycle - Check if a singly linked list has a cycle
 * @list: Pointer to the head of the linked list
 * Return: 1 if there is a cycle, 0 otherwise
 */
int check_cycle(listint_t *list) {
    listint_t *slow, *fast;

    if (list == NULL || list->next == NULL)
        return 0;

    slow = list;
    fast = list->next;

    while (fast != NULL && fast->next != NULL) {
        if (slow == fast)
            return 1; /* Cycle detected */

        slow = slow->next;
        fast = fast->next->next;
    }

    return 0; /* No cycle found */
}

/* Example usage */
int main(void) {
    listint_t *head, *node1, *node2, *node3;

    /* Create a linked list with a cycle */
    head = malloc(sizeof(listint_t));
    node1 = malloc(sizeof(listint_t));
    node2 = malloc(sizeof(listint_t));
    node3 = malloc(sizeof(listint_t));

    head->n = 1;
    head->next = node1;

    node1->n = 2;
    node1->next = node2;

    node2->n = 3;
    node2->next = node3;

    node3->n = 4;
    node3->next = head; /* Create a cycle */

    /* Check if the linked list has a cycle */
    if (check_cycle(head))
        printf("The linked list has a cycle.\n");
    else
        printf("The linked list does not have a cycle.\n");

    /* Clean up: free allocated memory */
    free(node3);
    free(node2);
    free(node1);
    free(head);

    return (0);
}
