#include <stdio.h>

char operator;
float num1;
float num2;
float Result;
char check=0;
int main()
{
    printf("Enter operator either + or - or * or /: ");
    fflush(stdout); fflush(stdin);
    scanf("%c",&operator);

    printf("Enter two operands: ");
    scanf("%f",&num1);
    scanf("%f",&num2);

    switch(operator)
    {
        case '+':
        {
            Result=num1+num2;
        }
        break;

        case '-':
        {
            Result=num1-num2;
        }
        break;

        case '*':
        {
            Result=num1*num2;
        }
        break;

        case '/':
        {
            Result=num1/num2;
        }
        break;

        default:
        {
            printf("Invalid Entry \n");
            check=1;
        }
        break;
    }
    if (check==0)
    {
        printf("%f %c %f = %f",num1,operator,num2,Result);
    }

    return 0;
}