#include <stdio.h>

float a,b,c;
int main()
{
    printf("enter 3 numbers: \n");
    fflush(stdin); fflush(stdout);
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("Largest Number = ");
    if(a>b && a>c)
    {
        printf("%f \n",a);
    }
    else if(b>c && b>a)
    {
        printf("%f \n",b);
    }
    else
    {
        printf("%f \n",c);
    }
    
    return 0;
}