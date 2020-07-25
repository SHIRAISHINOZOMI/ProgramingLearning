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

NODE *insertHead(NODE *head, int num){
    NODE *node=newNode(num);
    node->next=head;
    return node;
}


int main(){
    NODE *head=NULL;

    head= insertHead(head,63);
    head= insertHead(head,27);
    head= insertHead(head,82);

    showList_Loop(head);


    return 0;
}
