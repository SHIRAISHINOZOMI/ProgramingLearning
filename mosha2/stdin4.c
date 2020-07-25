#include<stdio.h>

int mytoupper(char c){
    if('A'<=c && c<='Z')
    c +=('a'-'A');
    return c;
}

int main(){
    char c;
    fprintf(stdout, "Input a string\n");
    while(fscanf(stdin, "%c",&c)==1){
        c = mytoupper(c);
        printf("%c",c);
    }
    printf("\n");
    return 0;
}