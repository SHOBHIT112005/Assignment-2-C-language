#include<stdio.h>
int main()
{
    int x,y,z,w,t,q;
    printf("Enter a three digit number\n");
    scanf("%d",&x);
    y= x%10;
    z= x/10;
    w= z%10;
    t= z/10;
    q= y+w+t;
    printf("The sum od digits of %d is %d",x,q);
    return 0;

}