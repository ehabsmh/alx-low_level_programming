#include "lists.h"

int sum_listint(listint_t *head)
{
  int sum;
  listint_t *traverse;

  if (!head)
    return (0);

  traverse = head;
  sum = 0;

  while (traverse)
  {
    sum += traverse->n;
    traverse = traverse->next;
  }

  return (sum);
}
