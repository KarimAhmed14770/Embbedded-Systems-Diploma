#include <stdio.h>

int num1;
int num2;
int main()
{
    printf("Enter two integers: ");
    fflush(stdout); fflush(stdin);
    scanf("%i",&num1);
    scanf("%i",&num2);
    printf("Sum: %i \n",(num1 + num2));

}