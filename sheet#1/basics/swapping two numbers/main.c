#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The numbers you want to swap are:\n");
    int x,y;
    scanf("%d  %d",&x,&y );
    printf("the numbers you entered before swapping %d %d\n \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("the numbers after swapping are: %d %d\n",x,y);
    return 0;
}
