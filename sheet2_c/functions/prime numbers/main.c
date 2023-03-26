#include <stdio.h>
#include <stdlib.h>
int prime(int x);
int main()
{
    int n;
    printf("please enter a number: \n");
    scanf("%d",&n);
    int p = prime(n);
    if (p==1){
    printf("%d is a prime number",n);}
    else {printf("%d is not a prime number",n);}
    return 0;
}
int prime(int x){
    for (int i = x-1;i > 1;i--){
        if (x%i==0){
            return 0;
        }

    }
     return 1;
}
