#include<stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter two integers\n");
    scanf("x=%d\ny=%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("x=%d\ny=%d",x,y);
    return 0;
}