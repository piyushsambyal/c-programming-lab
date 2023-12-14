#include <stdio.h>
void swapbyvalue(int a,int b)
{
    int temp=a;
    a = b;
    b = temp;
    printf("a = %d, b = %d ", a,b);
}
void swapbyref(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter the value of a and b :- ");
    scanf("%d%d",&a,&b);
    printf("a = %d , b = %d ",a,b);
    swapbyref(&a,&b);
    printf("a = %d ,b = %d ",a,b);
    swapbyvalue(a,b);
    return 0;     
}