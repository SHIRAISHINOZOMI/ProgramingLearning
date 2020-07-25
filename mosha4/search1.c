#include<stdio.h>
#define N 10
#define FAILED -1

int search(int *ary, int key){
    int i;
    for(i=0;i<N;i++){
        if(ary[i]==key) return i;
    }
    return FAILED;
}

int main(void){
    int ary[N]={10,4,1,45,-3,1,3,99,2,8};
    int x, idx;
    printf("inout number :");
    scanf("%d",&x);
    idx=search(ary,x);
    if(idx == FAILED) printf("%d is not included\n",x);
    else printf("%d is %dth number.\n",x,idx);
}