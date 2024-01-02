#ifndef LISTS_H
#define LISTS_H

/* Definition for singly-linked list. */
struct listint_s {
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

/* Function prototype for check_cycle */
int check_cycle(listint_t *list);

#endif /* LISTS_H */

#include "lists.h"

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
