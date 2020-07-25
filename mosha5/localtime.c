#include<stdio.h>
#include<time.h>

int main(){
    time_t now;
    struct tm *tmnow;
    now=time(NULL);
    tmnow=localtime(&now);
    printf("%4d/%02d/%02d/%02d:%02d:%02d\n"
    ,tmnow->tm_year+1900,tmnow->tm_mon+1,tmnow->tm_mday,
    tmnow->tm_hour,tmnow->tm_min,tmnow->tm_sec);
    return 0;
}