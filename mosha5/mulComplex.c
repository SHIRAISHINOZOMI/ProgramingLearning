#include<stdio.h>

struct complex{
    double re;
    double im;
};
typedef struct complex COMPLEX;

COMPLEX mulComplex(COMPLEX x, COMPLEX y){
    COMPLEX z;
    z.re=x.re*y.re-x.im*y.im;
    z.im=x.re+y.im+x.im*y.re;
    return z;
}

int main(){
    COMPLEX a,b,c;

    a.re=4.0;
    a.im=1.0;
    b.re=2.0;
    b.im=2.0;
    c=mulComplex(a,b);
    printf("x=%3.1lf+%3.1lfi\n",z.re,z.im);
    return 0;
}