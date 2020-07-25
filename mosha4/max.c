#include<stdio.h>
#define Max(x,y) ((x)>(y)?(x):(y))

int main(){
    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);

    c=Max(a,b);
    printf("%d\n",c);
}