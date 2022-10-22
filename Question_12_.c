#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    y= (y*100)+x;
    printf("The number obtained after rotation is %d",y);
    return 0;

}