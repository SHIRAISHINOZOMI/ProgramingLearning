#include<stdio.h>
#include<string.h>

int main(){
    char s1[]="ABC", s2[10];

    strcpy(s2, s1);
    printf("s2[]=%s\n",s2);
    return 0;
}