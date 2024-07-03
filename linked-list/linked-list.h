#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>


struct node
{
    int value;
    struct node *next;
};
typedef struct node node_t;

void print_linked_list(node_t *head);

node_t *create_new_node(int value);

node_t *insert_node_at_head(node_t *head, node_t *node_to_insert);

#endif // LINKED_LIST_H