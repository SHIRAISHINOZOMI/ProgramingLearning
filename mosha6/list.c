#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}NODE;

int main(){
    NODE *head;
    NODE *first, *second, *third;

    first = (NODE*)malloc(sizeof(NODE));
    second = (NODE*)malloc(sizeof(NODE));
    third = (NODE*)malloc(sizeof(NODE));

    first->num=63;
    second->num=27;
    third->num=82;

    head = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    printf("%d ",head->num);
    printf("%d ",head->next->num);
    printf("%d ",head->next->next->num);
    printf("\n");

    return 0;
}