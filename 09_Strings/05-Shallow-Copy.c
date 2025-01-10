#include <stdio.h>
/* Main Function */
int main()
{
  char s1[] = "Rahul";
  char *s2 = s1;
  s1[0] = 'M';
  printf("%s", s2);
  return 0;
}