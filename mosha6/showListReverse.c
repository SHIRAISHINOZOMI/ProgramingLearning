#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}NODE;

NODE *newNode(int num){
    NODE *p;
    p=(NODE*)malloc(sizeof(NODE));

    if(p==NULL){
        fprintf(stderr,"malloc errror\n");
        exit(1);
    }
    p->num = num;
    return p;
}

void Recursive(NODE *p){
    if(p!=NULL){
       Recursive(p->next);
      printf("%d ",p->num);
    }
}

void showListReverse(NODE *p){
    Recursive(p);
    printf("\n");
}

int main(){
    NODE *head;

    head = newNode(63);
    head->next = newNode(27);
    head->next->next=newNode(82);
    head->next->next->next=NULL;

    showListReverse(head);

    return 0;
}