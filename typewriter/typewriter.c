/* 
getchar example : typewriter 

*/
#include <stdio.h>

int main ()
{
  int c;
  puts ("Enter text. Include a dot ('.') in a sentence to exit:");
  do {
    c=getchar();
    putchar (c);
  } while (c != '.');
  printf("\n");
  return 0;
}