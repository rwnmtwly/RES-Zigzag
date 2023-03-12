#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter aperation\n");
    float x,y;
    char op;
    scanf("%f %c %f",&x,&op,&y);
    switch (op){
    case '+':
        printf("%f %c %f = %f",x,op,y,x+y);
        break;
    case '-':
        printf("%f %c %f = %f",x,op,y,x-y);
        break;
    case '/':
        printf("%f %c %f = %f",x,op,y,x/y);
        break;
    case '*':
        printf("%f %c %f = %f",x,op,y,x*y);
        break;
    default:
        printf("unknown operator");

    }

    return 0;
}
