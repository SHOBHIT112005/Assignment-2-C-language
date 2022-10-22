#include<stdio.h>
int main()
{
    int x,y,w,z;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("Enter a digit\n");
    scanf("%d",&y);
    w = x*10;
    z = w+y;
    printf("The resulting number is %d",z);
    return 0;

}