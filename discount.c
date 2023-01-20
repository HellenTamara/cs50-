#include <stdio.h>
#include <cs50.h>

<<<<<<< HEAD
float discount (float price, int percentage_off);
=======
>>>>>>> 48bf9c2788e76a9986044ca09b2c605293942e0b

float discount(float price, int percentage);

int main (void)
{
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);
    printf("Sale price: %.2f\n", sale);
}

float discount (float price, int percentage_off)
{
    return price * (100 - percentage) / 100;
}