#include <stdio.h>

int number_of_students;
float average;
float degree;
float sum_of_degrees;
int counter;

int main()
{
    printf("Enter number of students: \n");
    fflush(stdin); fflush(stdout);
    scanf("%i",&number_of_students);

    
    for(counter=1; counter<=number_of_students;counter++)
    {
        printf("Enter Student (%i) degree: \n",counter);
        scanf("%f",&degree);
        sum_of_degrees+=degree;

    }
    average=(sum_of_degrees/number_of_students);
    printf("Average: %f \n",average);
    return 0;
}