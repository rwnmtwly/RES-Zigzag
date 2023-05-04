#include <stdio.h>
#include <stdlib.h>
void selectionsort(int arr[], int size){
    int temp;
    for (int i=0; i<size-1;i++){

        for(int j=i+1; j<size;j++){
            if (arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

    }
}
}
int main()
{
   int arr[]={10,12,7,3,9,17,30,56,77,65};
   int size= sizeof(arr)/sizeof(arr[0]);

     printf("arr before sorting:\n");
   for(int i=0;i<size;i++){

        printf("%d\t",arr[i]);
   }
    printf("\n arr after sorting:\n");
    selectionsort(arr,size);
   for (int i=0; i<size;i++)
    printf("%d\t", arr[i]);
    return 0;
}
