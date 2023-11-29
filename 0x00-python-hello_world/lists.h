#include "lists.h"

/**
 * check_cycle - Check's if a Linked List Contains a Cycle
 * @list: Linked List to be Checked
 *
 * Return: 1 If the List has a Cycle, 0 If it Doesn't
 */
int check_cycle(listint_t *list)
{
        listint_t *slow = list;
        listint_t *fast = list;

        if (!list)
                return (0);

        while (slow && fast && fast->next)
        {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                        return (1);
        }

        return (0);
}

#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Singly Linked List'S
 * @n: integer
 * @next: Points to the Next Node
 *
 * Description: Singly Linked List's Node Struct
 * for ALX Project
 */
typedef struct listint_s
{
        int n;
        struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
