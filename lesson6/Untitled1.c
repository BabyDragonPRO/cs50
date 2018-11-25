#include <cs50.h>
#include <stdio.h>

#define CLASS_SIZE = 3

int main(void)
{
    int temperature[] = {22,33,44};

    for (int i = 0; i<3; i++){
        temperature[i] = i;
        printf("%i\n",temperature[i]);
    }
}