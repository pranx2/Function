#include<stdio.h>
 
 int fibo (int n );

 int main(int argc, char const *argv[])
 {
  int n;
  printf("Enter he nth fibonacci number :");
  scanf("%d",&n);
  printf("The Fibonacci number is :");
  printf("%d\t",fibo(n));
  return 0;
 }

   int fibo (int n){
    int fibo [n] ;
     fibo [0] = 0 ;
     fibo [1] = 1 ;
     printf("\t%d\t %d\t",fibo[0],fibo[1]);
     for (int i = 2 ; i < n; i++)
     {
        fibo [i] = fibo[i-1] + fibo [i - 2 ];
        printf("%d\t",fibo[i]);
     }
   }