#include<stdio.h>
#include<ctype.h>

int main(){
  char str[]="This is a Pen.";

  int i;

  printf("%s\n",str);
  for(i=0;i<sizeof(str);i++){
    if(isupper(str[i])){
      str[i]=tolower(str[i]);
    }else{
      str[i]=toupper(str[i]);
    }
  }
  printf("%s\n",str);
  return 0;
}