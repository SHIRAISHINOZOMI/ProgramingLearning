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
        fprintf(stderr,"malloc error\n");
        exit(1);
    }
    p->num=num;
    return p;
}

int main(){
    NODE *head;

    head=newNode(63);
    head->next=newNode(27);
    head->next->next=newNode(82);
    head->next->next->next=NULL;

    printf("%d ",head->num);
    printf("%d ",head->next->num);
    printf("%d ",head->next->next->num);
    printf("\n");

    return 0;
}