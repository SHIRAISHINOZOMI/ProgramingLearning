#include <stdio.h>

int main(){
    FILE *fp;
    char file[] = "c.txt";
    int a;
    char c;

    fp = fopen(file, "r");
    if(fp == NULL){
	printf("File open error");
	return 1;
    }
    fscanf(fp, "%d\n%c\n", &a, &c);
  /* ファイルから読み出す*/
    fclose(fp);

    printf("%d\n%c\n", a, c);
    return 0;
}