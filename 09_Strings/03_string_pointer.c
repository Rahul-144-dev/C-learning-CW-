#include <stdio.h>
/* Main Function */
int main()
{
  // printf("%p", &str[0]);
  // puts("");
  // printf("%p", ptr);
  char str[] = "Rahul Saha";
  char *ptr = str; // ptr points to str[0]
  int i = 0;
  while (*ptr != '\0')
  {
    printf("%c", *ptr);
    ptr++;
  }
  return 0;
}