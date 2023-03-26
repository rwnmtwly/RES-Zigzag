#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of your array: \n");
    int s;
    scanf("%d",&s);
    int arr[s];
    printf("Enter the elements of your array: \n");
    for (int i=0; i<s; i++){
        scanf("%d",&arr[i]);
    }
    printf("The element you want to search is: \n");
    int x;
    scanf("%d",&x);
    int first=0;
    int last=s-1;
    int middle=(first+last)/2;
     while( first <= last ){
        if ( arr[middle] < x )
                first = middle + 1;
        else if ( arr[middle] == x ) {
                printf("\n %d found at location %d.\n", x, middle+1);
                break;
        }
        else
                last = middle - 1;
        middle = (first + last)/2;
   }
   if ( first > last )
      printf("Not found! %d is not present in the list.\n", x);

    return 0;
}
