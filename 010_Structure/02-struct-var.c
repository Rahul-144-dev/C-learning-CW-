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
    char name[20], grade;
    int roll, marks;
    float percentage;
  } rahul;

  blastoise.height = 5;
  blastoise.weight = 188;
  blastoise.tier = 'B';
  strcpy(blastoise.catagory, "Shellfish");

  return 0;
}