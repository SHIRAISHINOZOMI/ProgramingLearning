#include <stdio.h>
#include <math.h>

int main(){
   int n =0, sum =0, sums =0, x;
   double ave, V, D;
   printf("Input integers¥n");
     while(fscanf(stdin, "%d", &x) ==1){
       sum += x;
       sums += x * x;
       n++;
    }
    
 ave = (double)sum / n;
 V = fabs(((double)sums / n) - ave * ave);
 D = sqrt(V);
printf("%d / %d = %lf¥n", sum, n, ave);
printf("Variance: %lf¥n", V);
printf("Standard deviation: %lf¥n", D);
    return 0;
}
