#include<stdio.h>
#include<stdlib.h>

int main(){
    char c;
    printf("Input integar [0-9]\n");
    while((c=getchar())!='\n'){
        if('0'<=c && c<=9){
            printf("%c\n",c);
        }else{
            fprintf(stderr,"\"%c\" is not integar\n",c);
            exit(1);
        }
    }
        printf("\n");
        return 0;
}