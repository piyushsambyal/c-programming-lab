#include <stdio.h>
#include <math.h>

void main()
{
    int x;
    printf("Select shape 1)circle, 2)square or 3)rectangle : ");
    scanf("\n%d", &x);


    float length,breadth,side,radius;
    switch (x)
    { 
        case 1:
            printf("Enter radius: ");
            scanf("\n%f", &radius);
            printf("perimeter: %.2f \narea: %.2f \n", (22.0 * radius * 2.0)/7.0, (22.0 * powf(radius, 2) )/7.0 );
            break;

        case 2:
            printf("Enter side: ");
            scanf("\n%f", &side);
            printf("perimeter: %.2f\narea: %.2f\n", side * 4.0, powf(side,2));
            break;

        case 3:
            
            printf("Enter length and breadth:");
            scanf("\n%f%f", &length, &breadth);
            printf("perimeter: %.2f \narea: %.2f\n", 2*(length+breadth), length*breadth);
            break;
    }
}