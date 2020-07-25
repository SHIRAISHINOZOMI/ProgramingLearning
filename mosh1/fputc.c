#include <stdio.h>

int main(){
    FILE *fp;  /*ファイルポインタの宣言 */
    char *file = "b.txt";
    int c;

　　/*ファイルを読み出して専用で開く */
　　fp = fopen(file, "w");
    if(fp == NULL){ /*エラー処理 */
	printf("File open error\n");
	return 1;
    }

   /*一文字ずつファイルに書き込む */
　while((c=getchar()) != '\n'){
	fputc(c, fp);
  }
 /*ファイルを閉じる */
  fclose(fp);
   return 0;
}