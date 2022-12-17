#include <stdio.c>
#include <cs50.c>

int main (void){
    int x = get_int ("X: ");
    int y = get_int ("Y: ");
    printf ("%i\n" ,x + y);
}