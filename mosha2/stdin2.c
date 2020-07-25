#include<stdio.h>

int mytoupper(char c){
    if('A'<=c && c<='Z')
    c +=('a'-'A');
    return c;
}

int main(){
    char c;
    fprintf(stdout, "Input a string\n");
    while(c = fgetc(stdin)!='\n'){
        c = mytoupper(c);
        fprintf(stdout, "%c",c);
    }
    fprintf(stdout, "\n");
    return 0;
}