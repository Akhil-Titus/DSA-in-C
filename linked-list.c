#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;
};
typedef struct node node_t;

void print_list(node_t *head)
{
    node_t *temporary = head;

    while (temporary != NULL)
    {
        printf("%d-", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

int main()
{
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    // linking as 32->8->45
    head = &n3;     // make n3 the first struct
    n3.next = &n2;  // give adress of n2 struct as the next node adress
    n2.next = &n1;  // give adress of n1 struct as the next node adress
    n1.next = NULL; // to end the structure

    print_list(head);
    return 0;
}