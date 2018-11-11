//floating

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("answer: ");

    switch(number)
    {
        case 1:
            printf("output 1\n");
        case 'y':
            printf("yes\n");
            break;
        case 'n':
            printf("no\n");
            break;
    }
}