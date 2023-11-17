#include <stdio.h>
int main()
{
    int x;
    printf("Enter number of elements: ");
    scanf("\n%d", &x);
    int array[x];
    for (int i=0; i<x; i++)
  {
    printf("Enter element %d: ", i+1);
    scanf("\n%d", &array[i]);
  } 
    for (int i=0; i< x-1; i++)
 {
    for (int j=0; j<x-1;j++)
  {
    if (array[j] > array[j+1])
   {
     int t = array[j];
     array[j] = array[j+1];
     array[j+1] = t;
   }
  }
 }
    printf("Sorted Array: ");
    for (int i=0;i<x;i++)
{
    printf("%d ",array[i]);
}
    return 0;
}