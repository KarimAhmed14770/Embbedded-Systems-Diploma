#include <stdio.h>

int num;

int main()
{
    printf("Enter an integer you want to check: ");
    fflush(stdout); fflush(stdin);
    scanf("%i", &num);

    if((num%2)==0)
    {
        printf("%i is even.",num);
    }
    else
    {
        printf("%i is odd.",num);
    }
    return 0;
}