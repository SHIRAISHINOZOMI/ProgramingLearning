#include <stdio.h>

int main(){
    FILE *fp;  /*�t�@�C���|�C���^�̐錾 */
    char *file = "b.txt";
    int c;

�@�@/*�t�@�C����ǂݏo���Đ�p�ŊJ�� */
�@�@fp = fopen(file, "w");
    if(fp == NULL){ /*�G���[���� */
	printf("File open error\n");
	return 1;
    }

   /*�ꕶ�����t�@�C���ɏ������� */
�@while((c=getchar()) != '\n'){
	fputc(c, fp);
  }
 /*�t�@�C������� */
  fclose(fp);
   return 0;
}