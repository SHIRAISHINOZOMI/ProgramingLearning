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

void showList_recursive(NODE *p){
    if(p!=NULL){
        printf("%d ",p->num);
       showList_recursive(p->next);
      // printf("%d ",p->num);
    }else{
    printf("\n");
    }
}

int main(){
    NODE *head;

    head = newNode(63);
    head->next = newNode(27);
    head->next->next=newNode(82);
    head->next->next->next=NULL;

    showList_recursive(head);

    return 0;
}