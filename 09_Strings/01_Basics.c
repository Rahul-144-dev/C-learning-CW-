#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  // char str[] = {'R', 'a', 'h', 'u', 'l'}; // size = 5
  // char str[] = "Rahul"; // automatically count a extra charecter for NULL('\0') size = 6
  char str[10];
  scanf("%[^\n]s", str);
  puts(str);
  return 0;
}
