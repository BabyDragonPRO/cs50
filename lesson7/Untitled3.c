#include <stdio.h>
#include <cs50.h>

double square(double number){
    return number * number;
}

int stepen(void){
    double answer = 0;
    double number = 0;
    double stepen = 0;
    printf("number:");
    scanf("%lf",&number);
    printf("stepen:");
    scanf("%lf",&stepen);

    for(int i = 0; i < stepen; i ++){
        answer = answer + number;
    }

    return answer;
}

int main(void){
    //printf("square is %f cm \n",square(get_double("Write a number:")));
    //printf("number in stepen is %i\n", stepen(get_int[0]("write a number that you want in stepen")), stepen(get_int[1]("write a number that you want make stepen")))
    printf("answer: %d\n",stepen());
}