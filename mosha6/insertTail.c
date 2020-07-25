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

void showList_Loop(NODE *p){
    if(p!=NULL){
        printf("%d ",p->num);
        showList_Loop(p->next);
    }else{
        printf("\n");
    }
}

NODE *insertTail(NODE *head, int num){
    NODE *p;
    NODE *node=newNode(num);
    node->next=NULL;

    if(head==NULL){
        return node;
    }else{
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=node;
        return head;
    }
}

int main(){
    NODE *head = NULL;

    head = insertTail(head,82);
    head = insertTail(head,27);
    head = insertTail(head,63);

    showList_Loop(head);

    return 0;
}