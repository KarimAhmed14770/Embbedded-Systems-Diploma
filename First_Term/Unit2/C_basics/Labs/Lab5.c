#include <stdio.h>

int a,b,c;
int main()
{
    printf("enter 3 numbers: \n");
    fflush(stdin); fflush(stdout);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Bigger Number is: ");
    if(a>b && a>c)
    {
        printf("%d \n",a);
    }
    else if(b>c && b>a)
    {
        printf("%d \n",b);
    }
    else
    {
        printf("%d \n",c);
    }
    
    return 0;
}