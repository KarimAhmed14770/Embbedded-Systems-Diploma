#include <stdio.h>


#define PI (3.14)


float circle_radius;
char choice;
float area;
float circumference;

int main()
{
    printf("Enter the Circle's Radius: \n");
    fflush(stdout); fflush(stdin);
    scanf("%f",&circle_radius);
    printf("Enter 'a' to calculate area or 'c' to calculate cricumference\n ");
    fflush(stdout); fflush(stdin);
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a':
    {
        area=PI*circle_radius*circle_radius;
        printf("Area= %f \n",area);
    }
    break;
    
    case 'c':
    {
        circumference=2.0*PI*circle_radius;
        printf("Circumference= %f \n",circumference);
    }
    break;
    default:
    {
        printf("Invalid Entry \n");
    }
    break;
    }
    return 0;
}