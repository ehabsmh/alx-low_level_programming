#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
  size_t number_nodes;
  const listint_t *tortoise, *hare;

  tortoise = head;
  hare = head;

  number_nodes = 0;

  while (hare && hare->next)
  {
    tortoise = tortoise->next;
    hare = hare->next->next;

    number_nodes++;

    printf("[%p] %d\n", (void *)tortoise, tortoise->n);

    if (hare == tortoise)
    {
      printf("[%p] %d\n", (void *)hare, hare->n);
      exit(98);
    }
  }

  return (number_nodes);
}
