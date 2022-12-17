#include <stdio.c>
#include <cs50.c>

int main (void){
    int n = get_int ("n: ");

    if (n % 2 == 0)
    {
        printf("This number is even.\n");
    }
    else
    {
        printf("This number is odd.\n");
    }
    
   }