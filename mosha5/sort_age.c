#include<stdio.h>
#define N 5

typedef struct data{
      char name[30];
    int age;
    float height;
}DATA;


void printlist(DATA data[]){
    int i;
    DATA tmp;
    for(i=0;i<N;i++){
        printf("%10s %2d %3.1f\n", data[i].name,data[i].age,data[i].height);
    }
    printf("\n");
}

void bubblesort(int n,DATA data[]){
    int i,j;
    DATA tmp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(data[j].age>data[j+1].age){
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
    }
}

int main(){
    DATA data[N];
    int i;
    FILE *fp;

    fp=fopen("member.txt","r");

    for(i=0;i<N;i++){
        fscanf(fp,"%s %d %f",data[i].name, &data[i].age, &data[i].height);
    }

    fclose(fp);
    printlist(data);
    bubblesort(N,data);
    printlist(data);
    return 0;
}