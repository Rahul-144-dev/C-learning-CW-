#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  char str[] = "Rahul";
  puts("Reverse : ");
  int s = 0, size = 0;
  while (str[s] != '\0')
  {
    size++;
    s++;
  }
  for (int i = 0, j = size - 1; i <= j; i++, j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  puts(str);
  return 0;
}