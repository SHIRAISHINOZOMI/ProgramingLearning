#include<stdio.h>
#include<math.h>

double f(double x){
    double y;
    y = x*x*x;
    return y;
}

int main(){
    double x0,h,L;
    x0 = 3.1;
    h = 0.001;
    L = (f(x0+h)-f(x0))/h;
    printf("x0=%lf => %lf\n",x0,L);
    return 0;
}