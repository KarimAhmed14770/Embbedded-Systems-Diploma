#include <stdio.h>

char choice;

int main()
{
    printf("Enter a Character: ");
    fflush(stdout); fflush(stdin);
    scanf("%c",&choice);

    if(( choice>='a' && choice <='z')|| ( choice>='A' && choice <='Z') )
    {
        printf("%c is an alphabet",choice);
    }
    else
    {
        printf("%c is not an alphabet",choice);
    }

    
    return 0;
}