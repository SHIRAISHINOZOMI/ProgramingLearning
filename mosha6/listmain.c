#include<stdio.h>
#include"mylist.h"
int main() {
NODE *head=NULL;
head = insertHead(head, 63);
head = insertHead(head, 27);
head = insertHead(head, 82);
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
}