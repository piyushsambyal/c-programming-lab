#include <stdio.h>
int main()
{
    int arr[1000];
    int lim;
    printf("Enter the limit of array");
    scanf("%d", &lim);
    for(int i=0; i<lim; i++)
    {
        printf("Enter the elements");
        scanf("%d",&arr[i]);
    }
    int search,found=0;
    printf("Enter the element to search");
    scanf("%d",&search);

    for(int i=0;i<10;i++)
{
    if(arr[i]==search)
  {
    printf("Element found at the index %d",i);
    found=1;
    break;
 }
}
  if(found==0)
  printf("\n element not found");
  else
  printf("\n element founded");
  return 0;
}