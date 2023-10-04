#include <stdio.h>

void main()
{
    //RECTANGLE
    int l,b;
    printf("Enter the Value of Length of rectangle: ");
    scanf("%d",&l);
    printf("Enter the value of Breadth of rectangle: ");
    scanf("%d",&b);
    //SQUARE
    int side;
    printf("\nEnter the value of Side of Square: ");
    scanf("%d",&side);
    //CIRCLE
    float radius;
    printf("\nEnter the value of Radius of Circle: ");
    scanf("%f",&radius);
    printf("\nPERIMETER OF CIRCLE: %f ",2*3.14*radius);
    printf("\nAREA OF CIRCLE: %f ",radius*radius*3.14);
    printf("\n\nPERIMETER OF SQAURE : %d ",4*side);
    printf("\nAREA OF SQUARE : %d ",side*side);    
    printf("\n\nPERIMETER OF RECTANGLE : %d ",2*(l+b));
    printf("\nAREA OF RECTANGLE : %d ",l*b);
}