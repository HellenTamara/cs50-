#include <stdio.h>

//This is a function. Declaring it should happen before using it.
//In case you want to declare it after, you can do so by briefly introcing it before as in --> void meow (void); and then declaring it after
void meow(int n)
{
    printf("meow\n");
}

int main (void)
{
  int i = 0;
  while (i <= 3)
  {
    printf("meow\n");
    i++;
  }

  //can also be done as (but with no ending):

  while (true)
  {
    meow(n);
  }

  //or also as:
  
  for (int it = 0; i < 3; i++)
  {
    printf("meow\n");
  }
}