#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++)
    {

        for(int j=i+1; j<size; j++)
        {

            if(arr[i] > arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nElements of array in ascending order:");
    for(int i=0; i<size; i++)
    {
        printf("\t%d", arr[i]);
    }

 for(int i=0; i<size; i++)
    {

        for(int j=i+1; j<size; j++)
        {
            /*
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[i] < arr[j])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nElements of array in descending order: ");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
