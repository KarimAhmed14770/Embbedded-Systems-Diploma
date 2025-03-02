#include <stdio.h>

char choice;

int main()
{
    printf("Enter a Character: ");
    fflush(stdout); fflush(stdin);
    scanf("%c",&choice);
    if (choice =='a' || choice =='e' || choice =='i' || choice =='o' || choice =='u' ||
        choice =='A' || choice =='E' || choice =='I' || choice =='O' || choice =='U' )
        {
            printf("%c is vowel. \n",choice);
        }   
        else
        {
            printf("%c is consonant. \n",choice);
        } 
    return 0;
}