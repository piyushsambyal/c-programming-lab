#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2,p,q,sum,sq;
    printf("Enter the values :-");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    p = (x2-x1)*(x2-x1);
    q = (y2-y1)*(y2-y1);
    sum = p+q;
    sq = sqrt(sum);
    printf("Anwser is : %.2f ",sq);
    return 0;
}