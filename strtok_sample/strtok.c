#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="- This, a sample string. Hello example - ";
  char * pch;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-"); // look for space, , . and -
  }
  return 0;
}