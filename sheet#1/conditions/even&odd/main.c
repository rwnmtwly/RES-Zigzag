#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" Please, enter a number:\n");
    int x;
    scanf("%d",&x);
    if(x%2==0)
        printf(" The number you entered is even");
    else printf(" The number you entered is odd");
    return 0;
}
