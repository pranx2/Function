#include<stdio.h>

int fibo(int n);

int main(int argc, char const *argv[])
{
    int n = 6 ;
    printf("The fibonacci of %d  is : %d",n,fibo(n));
    return 0;
}

int fibo(int n ){
    //base of recursive;
    if (n==0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1 ;
    }
    

    int fiboNm1=fibo(n-1);//fibonacci 1 to n ;
    int fiboNm2=fibo(n-2);
    int fiboN= fiboNm1 + fiboNm2;
            printf("The number of %d fibonacci is : %d\n",n,fiboN);
        return fiboN;
    
}