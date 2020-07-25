#include<stdio.h>

struct complex{
    double re;
    double im;
}

int mian(){
    struct complex x;

    x.re=1.0;
    x.im=2.0;
    printf("x=%3.1lf+%3.1lfi\n",x.re,x.im);
    return 0;
}