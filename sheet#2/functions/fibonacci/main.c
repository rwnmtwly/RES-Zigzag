#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main()
{
    printf("Enter a number: \n");
    int f;
    scanf("%d",&f);
    int z=fib(f);
    printf("the term number %d in the fibonacci series is %d ",f,z);
    return 0;
}
int fib(int n){
    if (n==0)
        return 0;
    if (n==1||n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}
