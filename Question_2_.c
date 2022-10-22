#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter an integer\n");
    scanf("%d",&x);
    y = x/10;
    printf("%d becomes %d by removing last digit",x,y);
    return 0;

}