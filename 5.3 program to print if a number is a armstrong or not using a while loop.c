#include <math.h>
#include <stdio.h>
int main()
{
    int number1,number2,sum=0,r,l=0;
    printf("Enter number: ");
    scanf("\n%d",&number1);
    number2 = number1;
    while(number1>0) 
    {
        l++;
        number1 /= 10;
    }
    number1=number2;
    while(number1>0)
    {
        r=number1%10;
        sum=sum + pow(r,l);
        number1 /= 10;
    }

    if (number2 == sum) printf("The given number is an armstrong number\n");

    else printf("The given number is not an armstrong number\n");
    return 0;
}