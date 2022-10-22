#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y = x%10;
    printf("The unit digit of %d id %d",x,y);
    return 0;

    //What I typed for this program :-
    /*int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    int y;
    printf("Enter the multiple of 10th power nearest to entered number\n");
    scanf("%d",&y);
    int z = x-y;
    printf("The unit digit of %d is %d",x,z);
    return 0;*/
}


