#include "linked-list.h"


int main()
{
    node_t *head;
    node_t *tmp;

    // tmp = create_new_node(45);
    // head = tmp;                 // make 45 head

    // tmp = create_new_node(8);
    // tmp->next = head;          // link 45 as next in 8
    // head = tmp;                // mkae 8 the head (8-45)

    // tmp = create_new_node(32);
    // tmp->next = head;          // link 8 as next in 32   
    // head = tmp;                // make 32 the head (32-8-45)

    // for (int i = 0; i < 25; i++)
    // {
    //     tmp = create_new_node(i);
    //     tmp->next = head;
    //     head = tmp;
    // }
    
    for (int i = 0; i < 25; i++)
    {
        tmp = create_new_node(i);
        head = insert_node_at_head(head, tmp);
    }
    
    print_linked_list(head);


    return 0;
}