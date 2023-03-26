#include <stdio.h>
#include <stdlib.h>

int swap(int * a, int * b);
int main()
{
    printf("Enter two numbers: \n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("the numbers before swapping: %d and %d\n",x,y);
    swap(&x,&y);
    printf("the numbers after swapping: %d and %d\n", x,y);

    return 0;
}
int swap(int *a, int *b){
    printf("the numbers before swapping inside the function: %d and %d\n",*a,*b);
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("the numbers after swapping inside the function: %d and %d\n", *a,*b);
    return *a,*b;
}
