#include <stdio.h>

int main(){
    FILE *fp;
    char file[] = "a.txt";
    char s[256];

   /*�t�@�C����ǂݏo����p�ŊJ�� */
   fp = fopen(file, "r");
   if(fp == NULL){
	printf("File open error\n");
	return 1;
   }

     /*�t�@�C������s���ǂݏo�� */
�@�@while(fgets(s, 255, fp)!=NULL){
	printf("%s",s);
   }

      /*�t�@�C������� */
     fclose(fp);
     return 0;
}
