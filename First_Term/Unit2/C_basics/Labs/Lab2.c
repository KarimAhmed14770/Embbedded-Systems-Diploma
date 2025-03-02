#include <stdio.h>

int main()
{
   int testInteger;
   printf("enter an integer: ");
   fflush(stdout);
   scanf("%d",&testInteger);
   printf("Number = %d \n",testInteger);

   float testInteger2;
   printf("enter a float: ");
   fflush(stdout);
   scanf("%f",&testInteger2);
   printf("Number = %f \n",testInteger2);
    return 0;
}