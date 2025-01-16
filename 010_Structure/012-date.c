/* Header Files */
#include <stdio.h>
#include <stdbool.h>
/* Global Variables */
/* Structure */
typedef struct date
{
  int day;
  int month;
  int year;
} date;
/* Function Declaration */
void print_struct(date x);
/* Main Function */
int main()
{
  date a, b;
  // a=23/06/2006
  // b=14/01/2025
  a.day = 23;
  a.month = 6;
  a.year = 2006;

  b.day = 14;
  b.month = 1;
  b.year = 2025;

  bool flag = 1;
  {
    if (a.day != b.day)
      flag = 0;
    if (a.month != b.month)
      flag = 0;
    if (a.year != b.year)
      flag = 0;
  }
  if (flag)
    printf("Equal");
  else
    printf("NOT");

  // print_struct(b);
  return 0;
}
/* Function Definition */
void print_struct(date x)
{
  printf("%d/0%d/%d", x.day, x.month, x.year);
}