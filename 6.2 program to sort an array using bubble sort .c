#include<stdio.h>
int main()
{
    int a,i,j,temp;
    printf("Enter number of elements:");
    scanf("%d", &a);
    int arr[a];
    printf("Enter %d elements:\n", a);
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:");
    for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("After bubble sort: ");
    for(i=0;i<a;i++)
    {
        printf("%d ", arr[i]);
    }
}
