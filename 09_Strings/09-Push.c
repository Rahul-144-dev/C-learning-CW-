#include <stdio.h>
/* Main Function */
int main()
{
  char str[] = "College";
  printf("%s\n", str);
  for (int i = 6; i >= 1; i--)
  {
    str[i + 1] = str[i];
  }
  str[2] = 'k';
  printf("%s", str);
  return 0;
}