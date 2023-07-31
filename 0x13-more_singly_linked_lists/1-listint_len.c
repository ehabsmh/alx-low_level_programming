#include "lists.h"

size_t listint_len(const listint_t *h)
{
  size_t number_nodes;
  const listint_t *traversal;

  if (!h)
    return (0);

  traversal = h;
  number_nodes = 0;

  while (traversal)
  {
    traversal = traversal->next;
    number_nodes++;
  }

  return (number_nodes);
}
