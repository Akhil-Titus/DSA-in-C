#include "linked-list.h"


void print_linked_list(node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf("%d-", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));    // dynamically allocate node in the heap memory
    result->value = value;
    result->next = NULL;
    return result;
}

node_t *insert_node_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    *head = node_to_insert;
    return node_to_insert;
}