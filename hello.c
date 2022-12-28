// The #include adds libraries in which you can find some functions to use
#include <stdio.h>
#include <cs50.h>

// int main (void){} is the basic structure for C (for now, as a begginner)
int main (void)
{
    // Code in C to defining a variable "answer", getting a reply from user and printing it along with a text

    string answer = get_string ("What's your name? \n")
    printf("hello, %s\n", answer);
}