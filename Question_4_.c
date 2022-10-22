#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter two numbers\n");
   scanf("x=%d\ny=%d",&x,&y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("x=%d\ny=%d",x,y);
   return 0;
}