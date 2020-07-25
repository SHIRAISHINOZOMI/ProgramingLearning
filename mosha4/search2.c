#include<stdio.h>
#define N 10


int search(int *ary, int key){
    int i=0;
   while(ary[i]!=key)
       i++;
       return i;
    
}

int main(void){
    int ary[N+1]={10,4,1,45,-3,1,3,99,2,8};
    int x, idx;
    printf("input number :");
    scanf("%d",&x);
    ary[N]=x;
    idx=search(ary,x);
    if(idx==N) printf("%d is not included\n",x);
    else printf("%d is %dth number.\n",x,idx);
    return 0;
}