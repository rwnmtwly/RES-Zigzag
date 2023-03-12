#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a year: \n");
    int y;
    scanf("%d",&y);
    if(y%400==0)
        printf("the year %d is a leap year\n",y);
    else if(y%100==0)
        printf("the year %d is not a leap year\n",y);
    else if (y%4==0)
            printf("the year %d is a leap year\n",y);
    else printf("the year %d is not a leap year",y);
    return 0;
}
