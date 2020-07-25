typedef struct node {
int num;
struct node *next;
} NODE;
void showList_Loop(NODE *p);
void showList_recursive(NODE *p);
void showListReverse(NODE *p);
NODE *newNode(int num);
NODE *insertHead(NODE *head, int num);
NODE *insertTail(NODE *head, int num);
NODE *deleteNode(NODE *head, int num);
NODE *connectList(NODE *list1, NODE *list2);
NODE *insertAscendingOrder(NODE *head, int num);
