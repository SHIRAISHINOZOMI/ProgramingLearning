#include <stdio.h>

int main(){
    FILE *fp;
    char file[] = "c.txt";
    int a = 65;

    fp = fopen(file, "w");
    if(fp==NULL){
	printf("File open error");
	return 1;
    }
      /*ファイルに書き込む */
	fprintf(fp, "%d\n", a);
        fprintf(fp,  "%c\n",a);
   /*ファイルを閉じる */
　　　fclose(fp);
      return 0;

}