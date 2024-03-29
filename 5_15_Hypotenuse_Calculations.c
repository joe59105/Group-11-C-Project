#include <stdio.h>
#include <math.h>

double hypotenuse(double adjacent, double hypotenuse);

int main()
{
    double adjacent;
    double opposite;

    while (1) {
        puts("Enter the opposite side of the triangle(Enter -1 to exit)");
        scanf("%lf", &opposite); 
        if (opposite == -1) {
            break;
        }
        puts("enter the adjacent side of the triangle(Enter -1 to exit)");
        scanf("%lf", &adjacent);  
        if (adjacent == -1)
        {
            break;
        }
        printf("The hypotenuse of the triangle is %lf\n", hypotenuse(adjacent, opposite));
    }
        return 0;
}

double hypotenuse(double adjacent, double opposite)
{
    return sqrt((adjacent * adjacent) + (opposite * opposite));
}