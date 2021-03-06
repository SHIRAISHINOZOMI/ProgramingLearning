#include<stdio.h>
#define N 10

void quick_sort(int *ary, int begin, int end){
    int i,j,work,pivot;
    pivot=ary[(begin+end)/2];
    i=begin;
    j=end;

    while(1){
        while(ary[i]<pivot)++i;
        while(ary[j]>pivot)--j;
        if(i>=j) break;

        work=ary[i];
        ary[i]=ary[j];
        ary[j]=work;

        i++;
        j--;
    }

     if(begin<i-1) quick_sort(ary,begin,i-1);
     if(j+1<end) quick_sort(ary,j+1,end);
}

void print_array(int *ary, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",ary[i]);
    }
    printf("\n\n");
    
}

int main(){
    int ary[N]={30,20,60,50,45,5,40,90,70,80};

    print_array(ary,N);
    quick_sort(ary,0,N-1);
    print_array(ary,N);
    return 0;
}