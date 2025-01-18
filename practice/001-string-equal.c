/* Header Files */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Function Declaration */
void check(char s1[], char s2[]);
/* Main Function */
int main()
{
  char str1[] = "BCA";
  char str2[] = "BCA";
  check(str1, str2);
  return 0;
}
/* Function Definition */
void check(char s1[], char s2[])
{
  bool flag = true;
  for (int i = 0; i <= strlen(s1); i++)
  {
    if (s1[i] != s2[i])
      flag = false;
  }
  if (flag)
    printf("equal");
  else
    printf("not");
}