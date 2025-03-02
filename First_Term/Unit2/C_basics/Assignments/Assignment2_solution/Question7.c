#include <stdio.h>

int num1;
int counter;
int Result=1;

int main()
{
    printf("Enter an integer: \n");
    fflush(stdin); fflush(stdout);
    scanf("%i",&num1);
    if (num1 > 0)
    {
        for(counter=1; counter<=num1;counter++)
    {
        Result*=counter;
    }
    printf("Factorial = %i \n",Result);
    }
    else if(num1==0)
    {
        printf("Factorial Zero = 1 \n");
    }
    else
    {
        printf("Error !! Factorial of Negative numer doesn't exist\n");
    }
    
    
    return 0;
}