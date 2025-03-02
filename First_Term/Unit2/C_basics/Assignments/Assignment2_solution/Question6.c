#include <stdio.h>

int num1;
int counter;
int Result;

int main()
{
    printf("Enter an integer: \n");
    fflush(stdin); fflush(stdout);
    scanf("%i",&num1);
    
    for(counter=1; counter<=num1;counter++)
    {
        Result+=counter;
    }
    printf("Sum = %i \n",Result);
    return 0;
}