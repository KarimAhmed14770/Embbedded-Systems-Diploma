#include <stdio.h>

float num1;
float num2;
int main()
{
    printf("Enter two numbers: ");
    fflush(stdout); fflush(stdin);
    scanf("%f",&num1);
    scanf("%f",&num2);
    printf("Product: %f \n",(num1 * num2));

}