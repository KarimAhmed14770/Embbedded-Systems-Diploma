#include <stdio.h>

char c;

int main()
{
    printf("Enter a character: ");
    fflush(stdout); fflush(stdin);
    scanf("%c",&c);
    printf("ASCII value of %c: %i",c,c);
}