#include<stdio.h>
#define N 5

struct data{
    char name[30];
    int age;
    float height;
};
typedef struct data DATA;

int main(){
    int i;
    DATA member[N];
    FILE *fp;

    fp=fopen("member.txt","r");
    for(i=0;i<N;i++){
        fscanf(fp,"%s %d %f",member[i].name,&member[i].age,&member[i.height]);
    }

    for(i=0;i<N;i++){
         printf("%s is %d years old\n",member[i].name, member[i].age);
    }
}