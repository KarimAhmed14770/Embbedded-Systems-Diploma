#include <stdio.h>

int num1;
int num2;
int counter;
int Result;

int main()
{
    printf("Enter two numbers to calculate the sum of odd numbers between them: \n");
    fflush(stdin); fflush(stdout);
    scanf("%i",&num1);
    scanf("%i",&num2);
    if(((num1 % 2==0)))
    {
        num1++;
    }
    if(num2 %2 ==0)
    {
        num2--;
    }

    for(counter=num1; counter<=num2;counter+=2)
    {
        Result+=counter;
    }
    printf("Result: %i \n",Result);
    return 0;
}