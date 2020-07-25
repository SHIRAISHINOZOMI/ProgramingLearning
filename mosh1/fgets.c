#include <stdio.h>

int main(){
    FILE *fp;
    char file[] = "a.txt";
    char s[256];

   /*ファイルを読み出し専用で開く */
   fp = fopen(file, "r");
   if(fp == NULL){
	printf("File open error\n");
	return 1;
   }

     /*ファイルを一行ずつ読み出す */
　　while(fgets(s, 255, fp)!=NULL){
	printf("%s",s);
   }

      /*ファイルを閉じる */
     fclose(fp);
     return 0;
}
