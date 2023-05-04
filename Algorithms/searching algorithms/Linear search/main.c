#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={10,15,70,30,56,77,20,80,40,90};
    int x;
    for (int i=0; i<10 ; i++)
        printf("%d\n", arr[i]);
    printf ("Enter the element you want to search for:\n");
    scanf("%d",&x);
    for(int i = 0; i<10 ; i++){
        if (arr[i]==x){
            printf("The element you're looking for is: %d\n",arr[i]);
            printf("The index of the element found is: %d",i+1);}
    }
}
