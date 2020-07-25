#include<stdio.h>

int mytoupper(char c){
    if('a'<=c && c<='z')
        c='A' + (c - 'a');
    return c;
}

int main(){
    char c;

    fprintf(stdout, "Input a String\n");
    while((c=fgetc(stdin))!='\n'){
        c = mytoupper(c);
        fprintf(stdout, "%c",c);
    }
    fprintf(stdout, "\n");
    return 0;
}