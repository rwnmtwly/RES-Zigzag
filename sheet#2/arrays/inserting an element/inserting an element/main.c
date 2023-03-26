#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please, enter the number of elements elements: \n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Please, enter the elements:\n\n");
    for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
    printf("%d\t",arr[i]);
    }
    return 0;
}
