#include<stdio.h>
void main()
{
    int arr1[3][3];
    int arr2[3][3];
    printf("Enter 9 elements for array: ");
    for(int i=0;i<3;i++)

    {
        for(int j=0;j<3;j++)
        {
        scanf("%d", &arr1[i][j]);
        }
    }
   
printf("Enter 9 more elemnts for another array:");
       for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[3][3];
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
       arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    printf("Multiplication of matrix: \n");       
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

}