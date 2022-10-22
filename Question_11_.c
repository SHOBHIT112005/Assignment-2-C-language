#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the amount in INR\n");
    scanf("%f",&x);
    y=x/(76.23);
    printf("INR=%f is %f in USD",x,y);
    return 0;
    
}