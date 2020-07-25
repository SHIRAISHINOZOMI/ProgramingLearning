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

NODE *deleteNode(NODE*head, int num){
    NODE *p, *p_prev;

    if(head==NULL){
        printf("List is empty\n");
        return NULL;
    }else if(head->num == num){
        p =head;
        head = head->next;
        free(p);
        printf("%d is deleted.\n",num);
        return head;
    }else{
        p_prev = head;
        p = head->next;
        while(p!=NULL){
            if(p->num==num){
            p_prev->next=p->next;
            free(p);
            printf("%d is deleted.\n",num);
            return head;
        }
        p_prev=p;
        p=p->next;
    }
    printf("%d is not found.\n",num);
    return head;
    }
}

int main(){
    NODE *head=NULL;

    head= insertHead(head,63);
    head= insertHead(head,27);
    head= insertHead(head,82);
    showList_Loop(head);

    head = deleteNode(head, 27);
    showList_Loop(head);
    head = deleteNode(head, 63);
    showList_Loop(head); 
    head = deleteNode(head, 55); 
    showList_Loop(head);
    head = deleteNode(head, 82);
    showList_Loop(head);
    head = deleteNode(head, 82);
    showList_Loop(head);

    return 0;

    return 0;
}
