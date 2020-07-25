#include<stdio.h>
#include<string.h>

int main(){
    char s1[]="ABC2";
    char s2[]="ABCD";

    if(strcmp(s1,s2)<0){
        printf("%s\n",s1);
    }else{
        printf("%s\n",s2);
    }

    return 0;
}