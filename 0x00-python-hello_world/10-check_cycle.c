#include "lists.h"

/**
 * check_cycle - Check's if a Linked List Contain's a Cycle
 * @list: linked list to check
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
