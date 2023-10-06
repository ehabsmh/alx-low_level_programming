#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
  ul i;
  hash_node_t *tmp, *tmp2;

  if (!ht)
    return;

  for (i = 0; i < ht->size; i++)
  {
    tmp = ht->array[i];
    while (tmp)
    {
      tmp2 = tmp;
      tmp = tmp->next;
      free(tmp2->key);
      free(tmp2->value);
      free(tmp2);
    }
  }

  free(ht->array);
  free(ht);
}
