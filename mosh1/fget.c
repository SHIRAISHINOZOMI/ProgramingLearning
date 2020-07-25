#include <stdio.h>

int main(){
    FILE *fp;  /*ファイルポインタの宣言*/
    int c;
    char file[]="a.txt";

   /*ファイルを読み出し専用で開く*/
    fp = fopen(file, "r");
    if(fp ==NULL){　　　/*エラー処理*/
	printf("File open error\n");
	return 1;
    }

     /*ファイルから一文字ずつ取り出す*/
    while((c = fgetc(fp) != EOF)){
	putchar(c);
    }

　　/*エラー処理*/
    fclose(fp);
     return 0;
}