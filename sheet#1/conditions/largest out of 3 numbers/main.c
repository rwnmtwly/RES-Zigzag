#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter 3 numbers:\n");
    int x,y,z,m;
    scanf("%d %d %d",&x,&y,&z);
    m=x>y?(x>z?x:z):(y>z?y:z);
    printf("the largest number is %d\n",m);
    return 0;
}
