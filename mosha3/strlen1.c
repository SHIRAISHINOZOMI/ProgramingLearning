#include<stdio.h>

int main(){
    char s1[5]="ABC";

    int i=0;
    while(s1[i]!='\0'){
        i++;
    }
    printf("%d\n",i);
    return 0;
}