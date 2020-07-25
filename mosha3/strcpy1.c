#include<stdio.h>

int main(){
  char s1[]="ABC",s2[10];

  int i;
  for(i=0;i<10;i++){
    s2[i]=s1[i];
    if(s1[i]=='\0'){
      break;
    }
  }

  printf("s2[]=%s\n",s2);
  return 0;
}