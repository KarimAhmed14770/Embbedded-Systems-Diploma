#include <stdio.h>

int num1;
int num2;
int counter;
int Result;

int main()
{
    printf("Enter two numbers to calculate the sum of numbers between them: \n");
    fflush(stdin); fflush(stdout);
    scanf("%i",&num1);
    scanf("%i",&num2);
    
    for(counter=num1; counter<=num2;counter++)
    {
        Result+=counter;
    }
    printf("Result: %i \n",Result);
    return 0;
}