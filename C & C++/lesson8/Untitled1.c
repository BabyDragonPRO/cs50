#include <stdio.h>
#include <cs50.h>

double square(double number){
    return number * number;
}

double order(void){
    double answer = 0;
    double num1 = 0;
    double num2 = 0;
    printf("First number:");
    scanf("%lf",&num1);
    printf("Second number:");
    scanf("%lf",&num2);

    answer = num1 + num2;

    return answer;
}

int main(void){
    printf("answer: %lf\n",order());
}