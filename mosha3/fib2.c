#include<stdio.h>
#define Max_N 100
int F[Max_N];

int Fib2(int n){
    int i;
    F[0]=0; F[1]=1;
    for(i=2;i<=n;i++)
        F[i]=F[i-2]+F[i-1];

        return F[n];
}

int main(){
  int n;
  scanf("%d",&n);
  if(n > Max_N){
    fprintf(stderr, "n is too large!\n");
    return 1;
  }
   printf("Fib(%d)=%d\n", n, Fib2(n));
    return 0;
}