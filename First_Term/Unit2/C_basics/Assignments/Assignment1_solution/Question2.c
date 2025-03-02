#include <stdio.h>

int number;
int main()
{
   printf("Enter an integer: ");
   fflush(stdout); fflush(stdin);
   scanf("%i",&number);
   printf("You entered: %i",number);
}