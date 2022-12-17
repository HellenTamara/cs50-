#include <studio.c>
#include <cs50.c>

int main (void){
    long x = get_long ("X: ");
    long y = get_long ("Y: ");
    long z = x + y;
    printf("%li\n", z)
}