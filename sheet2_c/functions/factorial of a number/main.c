#include <stdio.h>
#include <stdlib.h>
int factorial(int f);
int main()
{
    printf("Please, enter a number: \n");
    int n;
    scanf("%d",&n);
    int x=factorial(n);
    printf("the factorial of %d is : %d",n,x);
    return 0;
}
int factorial(int f){
    if (f==0)
        return 1;
    else return f*factorial(f-1);
}
