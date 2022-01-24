#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct{
    int data;
    struct listnode *next;
}Listnode;
Listnode *genListNode(int data, Listnode *next){
    Listnode *node = (Listnode*)malloc(sizeof(Listnode));
    assert(node != NULL);
    node->data = data;
    node->next = next;
    return node;
}
void printLinkedList(Listnode *node){
    for(; node != NULL; node = node->next)
    printf("data = %d\n", node->data);
}
void freeLinkedList(Listnode *node){
    while(node != NULL){
        Listnode *next = node->next;
        free(node);
        node = next;
    }
}


int main(){
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    Listnode *head;
    Listnode *previous = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = genListNode(array[i],previous);
        previous = head;
    }
    printLinkedList(head);
    freeLinkedList(head);
    return 0;
}