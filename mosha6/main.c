#include<stdio.h>
#include"square.h"

int main(){
    int y,x;
    scanf("%d",&x);

    y=square(x);

    printf("%d*%d=%d\n",x,x,y);
}