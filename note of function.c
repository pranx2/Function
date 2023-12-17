#include<stdio.h>
#include<math.h>
//Function declared->
    float square ( float s );
    float circle ( float r );
    float rectangle( float l, float w );

int main (){
     //Variables of data->
        float s;
        float r;
        float l;
        float w;
        //Data input->
    printf("Enter the square first value : ");
    scanf("%f",&s);
    printf("Enter the rectangle length value : ");
    scanf("%f",&l);
    printf("Enter the rectangle wide value : ");
    scanf("%f",&w);
    printf("Enter the circle radius : ");
    scanf("%f",&r);
    //outputs->
                printf("\n");
                printf("The area of a square value is %0.2f  \n", square (s));//Arguments/function calling;
                printf("The area of a rectangle value is %0.2f \n", rectangle (l,w));//Arguments/function calling;
                printf("The area of a circle value is %0.2f   \n", circle (r));//Arguments/function calling;
    return 0 ;
    }
        //Function define->
        float square (float s){
            return pow (s , 2); //return means giving results;
        }
        float rectangle (float l , float w){
            return l*w;//return means giving results;
        }
        
        float circle (float r){
            return r* 3.1416;//return means giving results;
        }
        