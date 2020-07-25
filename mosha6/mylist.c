#include<stdio.h>
#include<stdlib.h>
#include"mylist.h"
void showList_Loop(NODE *p){
    while(p!=NULL){
     printf("%d ", p->num);
     p = p->next;
    }
       printf("¥n");
}

void showList_recursive(NODE *p){
  if(p!=NULL){
    printf("%d ", p->num);
    showList_recursive(p->next);
  }else{
    printf("¥n");
   }
}

void reverseRecursive(NODE *p){
  if(p!=NULL){
    reverseRecursive(p->next);
    printf("%d ", p->num);
   }
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

    if(head==NULL || num < head->num){ 
        node->next=head;
        return node;
    }else{
        p = head;
        while(p->next!=NULL){
            p_prev=p;
            p=p->next;
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

NODE *insertHead(NODE *head, int num){
    NODE *node=newNode(num);
    node->next=head;
    return node;
}

NODE *connectList(NODE *head1, NODE *head2){
    NODE *p;

    if(head1 == NULL){
        return head2;
    }else{
        p = head1;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next =  head2;
        return head1;
    }
}

NODE *insertTail(NODE *head, int num){
    NODE *p;
    NODE *node = newNode(num);
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
NODE *deleteNode(NODE *head, int num){
    NODE *p, *p_prev;

    if(head==NULL){
        printf("List is empty.\n");
        return NULL;
    }else if(head->num ==num){
        p=head;
        head=head->next;
        free(p);
        printf("%d is deleted.\n",num);
        return head;
    }else{
        p_prev=head;
        p=head->next;
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
        printf("%d is not found.\n", num);
        return head;
    }
}
