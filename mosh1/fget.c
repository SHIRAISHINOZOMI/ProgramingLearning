#include <stdio.h>

int main(){
    FILE *fp;  /*�t�@�C���|�C���^�̐錾*/
    int c;
    char file[]="a.txt";

   /*�t�@�C����ǂݏo����p�ŊJ��*/
    fp = fopen(file, "r");
    if(fp ==NULL){�@�@�@/*�G���[����*/
	printf("File open error\n");
	return 1;
    }

     /*�t�@�C������ꕶ�������o��*/
    while((c = fgetc(fp) != EOF)){
	putchar(c);
    }

�@�@/*�G���[����*/
    fclose(fp);
     return 0;
}