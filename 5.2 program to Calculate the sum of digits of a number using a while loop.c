#include <stdio.h>
int main()
{
    int number,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    while(number)
    {
        rem = number%10;
        sum = sum + rem;
        number/=10;
    }
    printf("Sum of digits are:%d",sum);

    return 0;
}