#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node *next;
}NODE;

void showList_Loop(NODE *p){
    while(p!=NULL){
        printf("%d ",p->num);
        p=p->next;
    }printf("\n");
}

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


NODE *insertAscendingOrder(NODE *head, int num){
    NODE *p, *p_prev;
    NODE *node=newNode(num);

    if(head==NULL|| num < head->num){
        node->next=head;
        return node;
    }else{
        p = head;
        while(p->next != NULL){
            p_prev = p;
            p = p->next;
            if(num < p->num){
                p_prev->next = node;
                node->next = p;
                return head;
            }
        }
        p->next = node;
        node->next=NULL;
        return head;
    }
}

int main(){
    NODE *head = NULL;

    head = insertAscendingOrder(head,63);
    head = insertAscendingOrder(head,27);
    head = insertAscendingOrder(head,82);
    head = insertAscendingOrder(head,2);
    head = insertAscendingOrder(head,99);

    showList_Loop(head);
    return 0;
}