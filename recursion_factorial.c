#include<stdio.h>

int fact(int n);
int main(int argc, char const *argv[])
{
    printf("The factorial number is : %d",fact(5));
    return 0;
}
//recursive function;
int fact (int n){
   if (n==1)
    {
        return 1 ;
    }
    printf("count the factorial number : %d\n",n);
    int factNm1= fact(n-1);
    int factN = fact(n-1)  * n ;
    return factN;
}
