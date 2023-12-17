#include<stdio.h>

int percentage(int cse,int math,int eng,int ged);
int main(int argc, char const *argv[])
{
    int cse = 98;
    int math = 99;
    int eng = 96;
    int ged = 95;
    char per = '%';
    printf("The total marks percentage is : %d%c",percentage(cse,math,eng,ged),per);
    return 0;
}

int percentage(int cse, int math ,  int eng,int ged){
    return ((cse +math+eng+ged)/4);
}
