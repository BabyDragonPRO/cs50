#include <stdio.h>
#include <string.h>
#include <cs50.h>

typedef struct
{
    string name;
    int age;
    int id;
    int score;
} student;


int main(void){
    student walker;
    walker.name = "walker";
    walker.age = 21;
    walker.id = 1999;
    walker.score = 12;

    student ivan = {"Ivan", 23, 2391, 2};
    printf("%s", ivan.name);

    return 0;
}