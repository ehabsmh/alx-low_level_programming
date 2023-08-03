#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
  listint_t *slow, *fast;

  if (!head)
    return (NULL);

  slow = head;
  fast = head;

  while (slow && fast && fast->next)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
      slow = head;
      break;
    }
  }

  while (slow != fast)
  {
    slow = slow->next;
    fast = fast->next;
  }

  return (slow);
}
