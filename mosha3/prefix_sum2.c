#include<stdio.h>
#define N 100000

void prefix2(int n, int x[], int y[]){
    int i,j;
    y[0]=x[0];
    for(i=1;i<n;i++){
        y[i]=y[i-1]+x[i];
    }
}

int main(){
    int x[N], y[N],i;
    for(i=0;i<N;i++){
        x[i]=i;
    }

    prefix2(N,x,y);
    printf("y[%d] = %d\n",N-1,y[N-1]);
    return 0;
}