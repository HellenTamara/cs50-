#include <stdio.c>
#include <cs50.c>

int main (void){
    char c = get_char ("Do you agree with the terms and conditions? ");

    if (c == 'y' || c =='Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("DIsagreed.\n");
    }
    
   }