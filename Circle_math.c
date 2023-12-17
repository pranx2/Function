#include<stdio.h>

    float diameter(float radius);
   float circumference(float radius);
   float area(float radius);

   int main(int argc, char const *argv[])
   {
    float radius;
    printf("Enter the  radius value of  a circle:\t ");
    scanf("%f",&radius);
    printf("The diameter of circle is : %0.2f\n",diameter(radius));
    printf("The circumference of circle is : %0.2f\n",circumference(radius));
    printf("The area of circle is : %0.2f\n",area(radius));
    return 0;
   }
   float diameter(float radius){
       return 2*radius;
   }
    float circumference(float radius){
     return 2*3.1416*radius;
    }
    float area(float radius){
     return 3.1416*radius*radius;
    }