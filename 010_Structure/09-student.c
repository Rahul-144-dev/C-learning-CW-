#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  typedef struct st_info
  {
    char name[20];
    int marks;
  } st_info;

  st_info student[10];
  {
    strcpy(student[0].name, "Rahul");
    student[0].marks = 20;
  }
  return 0;
}