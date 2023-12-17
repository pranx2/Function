#include<stdio.h>
//Sum of the number->[CODE BY PRANTO]
    int sum(int n);
int main(int argc, char const *argv[])
{
    printf("The sum is : %d",sum(20));
    return 0;
}
//Recursive function;
int sum (int n){
    if (n == 1 ) // condition n == 1 ;
    {
        return 1 ;
    }
    
    int sumNm1= sum (n-1); // sum of 1 to n;
    int sumN = sumNm1 + n ;
    return sumN; 
}