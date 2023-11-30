#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Check's if a Linked List Contain's a Cycle
 * @list: The linked list to check
 *
 * Return: 1 If the List has a Cycle, 0 If it Doesn't
 */
int check_cycle(listint_t *list)
{
        listint_t *slow, *fast;

        if (list == NULL || list->next == NULL)
                return (0);
	
	slow = list->next;
	fast  list->next->next;

        while (slow && fast && fast->next)
        {
		if ( slow == fast)
		       return (1);
	       slow = slow->next;
               fast = fast->next->next;
                     
        }

        return (0);
}
