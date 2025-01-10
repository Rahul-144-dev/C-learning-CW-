// Deep Copy
#include <stdio.h>
/* Main Function */
int main()
{
  char str1[] = "Rahul";
  // Calculate The size of the String 1
  int i = 0, size = 0;
  while (str1[i] != '\0')
  {
    size++;
    i++;
  }
  // Declare a new String with the size of String 1
  char str2[size];
  int j = 0;
  while (str1[j] != size)
  {
    str2[j] = str1[j];
    j++;
  }
  printf("%s", str2);
  return 0;
}