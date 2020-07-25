#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    char file_name[]="data.txt";
    int i;
    double x;
    fp = fopen(file_name, "w");
    if(fp==NULL){
        printf("file open error\n");
        return 1;
    }

    for(i=0;i<100;i++){
        x=10.0+(rand()/(double)RAND_MAX+1.0))*(20.0-10.0);
        fprintf(fp, "%lf\n",x);
    }
    fclose(fp);
    return 0;
}