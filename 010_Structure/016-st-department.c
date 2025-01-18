/* Header Files */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Global Declaration */
/* Structure */
typedef struct student
{
  char name[20];
  int roll;
  int yoj;
  char department[20];
  char course[20];
} student;
/* Function Declaration */
void check(student a, student b);
/* Main Function */
int main()
{
  student s1;
  strcpy(s1.department, "BCA");
  student s2;
  strcpy(s2.department, "BCA");
  check(s1, s2);
  return 0;
}
/* Function Definition */
void check(student a, student b)
{
  bool flag = true;
  for (int i = 0; i < strlen(a.department); i++)
  {
    if (a.department[i] != b.department[i])
      flag = false;
  }
  if (flag)
    printf("Equal");
  else
    printf("not");
}
