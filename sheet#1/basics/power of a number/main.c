#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, enter a number:\n");
    int x,y,p;
    scanf("%d",&x);
    printf("Please, enter an exponent:\n");
    scanf("%d",&y);
    p=pow(x,y);
    printf("the power of the number you entered is: %d\n",p);
    return 0;
}
