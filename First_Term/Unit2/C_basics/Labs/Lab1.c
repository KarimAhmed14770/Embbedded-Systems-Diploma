#include <stdio.h>

int main()
{
    int x=5;
    float y=2.0;
    if((x/y)==2)
    {
        printf("int/float >>>> int\n");
    }
    else if((x/y)==2.5)
    {
        printf("int/float >>>> float\n");
    }

    int i=3.5;
    float b=30;

    printf("i=%i \n",i);
    printf("b=%f \n",b);
    return 0;
}