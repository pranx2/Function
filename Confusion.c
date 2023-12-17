#include <stdio.h>
int confusion(int x, int y)
{
 x = 2*x + y;
 return x;
}
int main(void)
{
 int x = 2, y = 5;
 y = confusion(y, x);//y->x=5,x->y=2;
 x = confusion(y, x);//y->x=12,x->y=2;
 printf("x = %d and y = %d\n", x, y);
 return 0;
}