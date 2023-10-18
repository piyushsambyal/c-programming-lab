#include <stdio.h>
int main()
{
    int p = 1;
    int number;
    printf("Enter number: ");
    scanf("\n%d", &number);

    for(int i = 1; i <= number; i++)
        p *= i;
    
    printf("Factorial of %d: %d\n", number,p);
    return 0;
}