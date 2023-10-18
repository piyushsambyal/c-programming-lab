#include <stdio.h>
int main()
{
    int n,i=2;
    int Prime=1;
    printf("Enter number:");
    scanf("\n%d",&n);
    while(i<n/2 && Prime)
    {
        if (n%i==0) Prime=0;
        i++;
    }
    if (Prime) printf("%d is Prime\n", n);
    else printf("%d is not Prime\n", n);
    
    return 0;
}
