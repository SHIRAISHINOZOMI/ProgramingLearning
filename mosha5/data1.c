#include<stdio.h>

struct data{
    char name[30];
    int age;
    float height;
};
typedef struct data DATA;

int main(){
    DATA member1={"Tanaka",22,170};
    printf("%s is %d years old\n",member1.name, member1.age);

    return 0;
}