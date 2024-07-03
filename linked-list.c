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
    node_t n1, n2, n3, n4;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;
    n4.value = 6;
    printf("(4)-(3)-(2)-(1): %d, %d, %d, %d \n", n4.value, n3.value, n2.value, n1.value);

    /*
    * (3)-(2)-(1)
    */
    head = &n3;     // make n3 the first struct
    n3.next = &n2;  // give adress of n2 struct as the next node adress
    n2.next = &n1;  // give adress of n1 struct as the next node adress
    n1.next = NULL; // to end the structure

    printf("Node 1 (3)-(2)-(1)\n");
    print_list(head);       // normal node 

    /*
    * (4)-(3)-(2)-(1)
    */
    n4.next = &n3;
    head = &n4;

    printf("Node 2 (4)-(3)-(2)-(1)\n");
    print_list(head);       // new node as head

    /*
    * (3)-(2)-(4)-(1)
    */
    head = &n3;     // make n3 the first struct
    n3.next = &n2;  // give adress of n2 struct as the next node adress
    n2.next = &n1;  // give adress of n1 struct as the next node adress
    n1.next = NULL; // to end the structure

    printf("Node 3 (3)-(2)-(4)-(1)\n");
    n2.next = &n4;
    n4.next = &n1;
    print_list(head);       // put n4 between n2 and n1

    /*
    * (4)-(3)-(2)-(4)-(1)
    * infinite condition will run endlessly since same node used twice
    

    head = &n4;
    n4.next = &n3;
    print_list(head);
    *
    */


    return 0;
}