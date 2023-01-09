#include <stdio.h>
#include <cs50.h>

float discount(float price);

int main (void)
{
    float regular = get_float("Regular price: ");
    int percentage_off = get_float ("Percentage off:  ");
    float sale = discount(regular, percentage_off);
    printf ("Sale price: %.2f\n", sale);

}

float discount (float price, int percentage_off)
{
    return price * (100 - percentage) / 100;
}