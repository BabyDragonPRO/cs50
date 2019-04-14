#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char yn = get_char("Do you eat shit? <y, n> :");

    switch(yn)
    {
        case 'y':
            printf("You lol");
            break;
        case 'n':
            printf("I know you eat shit");
            break;
    }
}