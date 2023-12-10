#include <stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(int);
    printf("Array:");
    for (int i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");  
    int idx = -1;
    int val;
    printf("Enter value to search:");
    scanf("%d", &val);
    for (int i=0;i<len;i++)
    {
        if (arr[i] == val)
        {
            idx = i;
            break;
        }
    }
    if(idx != -1) 
    {
      printf("Value %d is located at index %d\n", val,idx);
    }
    else 
    {
      printf("Value %d is not located in the array\n",val);
    }
}
