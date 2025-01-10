#include <stdio.h>
/* Main Function */
int main()
{
  char *s1 = "Rahul";
  char *s2 = s1;
  s2 = "Majin";
  printf("%s\n", s1);
  printf("%s", s2);
  return 0;
}