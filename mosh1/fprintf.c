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
      /*�t�@�C���ɏ������� */
	fprintf(fp, "%d\n", a);
        fprintf(fp,  "%c\n",a);
   /*�t�@�C������� */
�@�@�@fclose(fp);
      return 0;

}