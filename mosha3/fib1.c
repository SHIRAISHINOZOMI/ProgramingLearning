#include<stdio.h>

int Fib1(int n){
    if(n<2)
      return n;
    else    
      return Fib1(n-2) + Fib1(n-1);
    
}

int main(void){
    int n;

    scanf("%d",&n);
    printf("Fib(%d)=%d\n", n, Fib1(n));
      return 0;
}