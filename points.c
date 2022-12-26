#include <stdio.h>
#include <cs50.c>

//Conditionals

int main (void){
    const int MINE = 2; //const tells the program that this parameter should not change. 
                        //Capitiliizing is the default to make it visible this variable is a constant.
    int points = get_int ("How many points did you lose? ");
    if (points < mine)
    {
        printf("You lost fewewr points than me.\n");
    }
    else if (points > mine)
    {
        printf("You lost more points than me.\n");
    }
    else 
    {
        printf("You lost the same amount of points than me.\n");
    }
   }