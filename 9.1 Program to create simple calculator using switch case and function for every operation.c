#include <stdio.h>
#include <math.h>
void main()
{
    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("\n%d %d", &a, &b);
    
    printf("Enter the operator: ");
    scanf("\n%c", &c);
    switch(c)
{
        case '+':
            printf("The sum is %d\n", a+b);
            break;
        case '-':
            printf("The difference is %d\n", a-b);
            break;
        case '*':
            printf("The product is %d\n", a*b);
            break;
        case '/':
            printf("The quotient is %f\n", (float)a/b);
            break;
        case '%':
            printf("The remainder is %d\n", a%b);
            break;
        default:
            printf("Invalid operator\n");
}
}