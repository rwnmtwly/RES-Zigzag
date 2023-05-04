#include <stdio.h>
#include <stdlib.h>
int bisearch(int arr[],int min, int max, int x){
    while (min<=max){

        int mid=(min+max)/2;
        if (x==arr[mid])
            return mid;
        else if(x<arr[mid])
            max=mid-1;
        else
            min=mid+1;
    }
   return 0;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<size-1; i++ ){
        printf("%d\t",arr[i]);
    }
    printf("\n Enter the element you want to search for:");
    int x;
    scanf("%d",&x);
    int res=bisearch(arr,0,size-1,x);
    if(res==0)
        printf("\n not found!");
    else printf("\n Element found at index of %d",res+1);
    return 0;
}
