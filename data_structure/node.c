#include "node.h"
#include<stdio.h>
struct node *getNode(struct node *head, unsigned int i){
    struct node *cur;
    struct node *cur1;
    cur = head; cur1 = head;
    int l = 1;
    while (cur->next != NULL){
        ++l;
    }
    for (int j = 0; j > l - i; j++)
    {
        cur = cur->next;
    }
    return cur;
}