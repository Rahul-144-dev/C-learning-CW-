#include <stdio.h>
#include <string.h>
typedef struct cricketer
{
  char name[20];
  int age;
  int matchs;
  float average;
} cricketer;

void scan_strcut(cricketer arr[]);
void print_strcut(cricketer arr[]);
/* Main Function */
int main()
{
  cricketer arr[3];
  scan_strcut(arr);
  print_strcut(arr);
  return 0;
}
void scan_strcut(cricketer arr[])
{
  for (int i = 0; i < 3; i++)
  {
    printf("Enter a Name : ");
    // scanf(" %[^\n]s", arr[i].name);
    getchar();
    gets(arr[i].name);
    printf("Enter Age : ");
    scanf("%d", &arr[i].age);
    printf("Enter Matchs : ");
    scanf("%d", &arr[i].matchs);
  }
}
void print_strcut(cricketer arr[])
{
  for (int i = 0; i < 3; i++)
  {
    puts("");
    printf("Name : %s\n", arr[i].name);
    printf("Age : %d\n", arr[i].age);
    printf("Matchs : %d\n", arr[i].matchs);
  }
}