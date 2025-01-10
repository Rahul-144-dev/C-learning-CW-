#include <stdio.h>
/* Main Function */
int main()
{
  char str[] = "Rahul";
  char *p = str;
  printf("%s", str);
  puts("");
  *p = 'T';
  printf("%s", str);
  // char *ptr = "Rahul";
  // printf("%p\n", ptr);
  // ptr = "Saha";
  // printf("%p", ptr);
  return 0;
}