#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    FILE *fp;
    char *file_name="data.txt";
    int i;
    double x, sum=0.0, sum2=0.0, ave, var, sd;

    fp=fopen(file_name, "r");
    if(fp==NULL){
        printf("File open error\n");
        return 1;
    }
    for(i=0;i<100;i++){
        if(fscanf(fp,"%lf",&x)!=1)break;
        sum +=x;
        sum2 +=x*x;
    }
    fclose(fp);
    ave = sum/i;
    var = sum2/i -ave*ave;
    if(var < 0) var=0.0;
    sd = sqrt(var);
    printf("number = %d¥n", i);
printf("sum = %5.2lf¥n", sum);
printf("average = %5.2lf¥n", ave);
printf("variance = %5.2lf¥n", var);
printf("standard deviation = %5.2lf¥n", sd);
return 0;
}