#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter the size of the array: \n");
    int size;
    scanf("%d",&size);
    int arr[size], f_arr[size];
    printf("enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("the elements of your array are:\n ");
    for (int i = 0; i < size; i++){
        printf("%d\t",arr[i]);
    }
    for (int i = 0; i < size; i++){
            int count=1;
            if (arr[i]!=-1){
        for (int j = i+1; j < size; j++){
            if (arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        f_arr[i]=count;
            }
    }
    for (int i = 0; i < size; i++){
        if (arr[i]!=-1)
            printf ("\n the frequency of element %d is %d \n",arr[i],f_arr[i]);
    }
    return 0;
}
