#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,a;
    srand(1);

    for(i=0;i<10;i++){
        a=(int)((rand()/(double)RAND_MAX+1.0))*1000.0);
        printf("%d\n",a);
    }
    return 0;
}