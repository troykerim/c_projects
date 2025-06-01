// String compare
#include <stdio.h>
#include <string.h>

int main ()
{
  char a[10];
  char b[10];
  // char result[20];
  printf("Enter a word: ");
  scanf("%s", a);
  printf("\nEnter another word: ");
  scanf("%s", b);
  if (strcmp(a,b) == 0)
  {
    printf("\nWords match!");
  }
  else
  {
    printf("\nWords do not match");
  }
  //result = strcat(a,b);
  
  printf("\nHere is your two words combined: %s", strcat(a,b));
  printf("\n");

  return 0;
}