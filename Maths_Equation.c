#include<stdio.h>

int SUM (int a , int b);
int SUBS(int a , int b);
int MUL (int a , int b);
int DEV (int a , int b);
//void Table (int n);

int main() {
    //int n ;
   // printf("Enter the number : ");
    //scanf("%d",&n);
    //Table (n);//argument/actual parameter;
// sum math;
       int a,b;
       printf("Enter first number : ");
            scanf("%d",&a);
       printf("Enter second number : ");
           scanf("%d",&b);
       //int s = SUM (a,b);
            printf("SUM is : %d \n", SUM(a,b));
            printf("SUBS is: %d \n",SUBS(a,b));
            printf("MUL is : %d \n", MUL(a,b));
            printf("DEV is : %d \n", DEV(a,b));
       return 0;
}
    int SUM(int a , int b)
    {
        return a+b ;                 
    }
    int SUBS (int a , int b)
    {
        return a-b ;
    }
    int MUL (int a , int b )
    {
        return a*b ;
    }
    int DEV(int a , int b)
    {
        return a/b ;
    }
    /*void Table(int n){ // parameter/formal parameter;
        for(int i = 1 ; i <= 10 ; i++) 
        {
        printf("%d\n",i*n);
        } 
    }*/