#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[], int size){
    int temp;
    for(int i=0; i < size-1; i++){
        for (int j=i+1;j<size; j++){
        if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
        }
    }
    }

}
int main()
{
    int arr[]={14,2,5,17,28,7,30,10,77,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf(" array before sorting:\n");
    for (int i=0; i<size;i++ )
        printf("%d\t",arr[i]);

    bubblesort(arr,size);
    printf("\n array after sorting:\n");
    for (int i=0;i<size; i++)
        printf("%d\t",arr[i]);
    return 0;
}
