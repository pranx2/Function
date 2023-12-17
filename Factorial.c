#include<stdio.h>

int fact(int n);
int main(int argc, char const *argv[])
{
 int fact_N ;
  printf("Enter the factorial number:");
   scanf("%d",&fact_N);
  printf("The factorial is :%d",fact(fact_N));
 return 0;
}
int fact (int fact_N){
    int t =1;
   for (int i = 1 ; i <= fact_N; i++)
   {
    t= i * t ; 
   }
   return t;
}
