#include <stdio.h>

float num;

int main()
{
    printf("Enter Number: ");
    fflush(stdin); fflush(stdout);
    scanf("%f",&num);

    if (num==0)
    {
        printf("You entered zero \n");
    }
    else if(num >0)
    {
         printf("%f is positive.\n", num);
    }
    else
    {
        printf("%f is negative.\n", num);
    }
    return 0;
}