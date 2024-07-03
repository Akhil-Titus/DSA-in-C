#include "linked-list.h"


int main()
{
    node_t *head;
    node_t *tmp;
    
    for (int i = 0; i < 25; i++)
    {
        tmp = create_new_node(i);
        insert_node_at_head(&head, tmp);
    }
    
    print_linked_list(head);


    return 0;
}