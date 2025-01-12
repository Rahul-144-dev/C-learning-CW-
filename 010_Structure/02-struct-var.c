#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  struct pokemon
  {
    int height, weight;
    char tier, catagory[100], type[100];
  } blastoise;
  struct student
  {
    char name[20], sem;
    int roll, marks;
    float percentage;
  };
  struct student s1;
  {
    strcpy(s1.name, "Rahul Saha");
    s1.sem = 1;
    s1.roll = 115;
    s1.marks = 150;
    s1.percentage = 75.4;
  }
  printf("%s\n", s1.name);
  printf("%d\n", s1.sem);
  printf("%d\n", s1.marks);
  printf("%f\n", s1.percentage);

  {
    blastoise.height = 5;
    blastoise.weight = 188;
    blastoise.tier = 'B';
    strcpy(blastoise.catagory, "Shellfish");
    strcpy(blastoise.type, "Water");
  }

  return 0;
}