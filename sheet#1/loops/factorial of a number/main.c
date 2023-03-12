#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: \n");
    int x,factorial=1;
    scanf("%d",&x);
    if (x<0)
        printf("invalid number(negative numbers are not allowed)");
    else{
    for (int i=1;i<=x;i++){
        factorial*=i;

    }
     printf("factorials of %d are:%d",x,factorial);
    }
    return 0;
}
