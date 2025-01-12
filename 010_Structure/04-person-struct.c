/* Ques :
Create a structure type 'Person' with name,salary and age as its attributes.
Declare and initialize 2 variables for this.
Print the name of first person and age of the other.*/
#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  struct Person
  {
    char name[100]; // this called attributes
    float salary;   // this called attributes
    int age;        // this called attributes
  } p2;
  struct Person p1;
  {
    strcpy(p1.name, "Rahul Saha");
    p1.salary = 10000;
    p1.age = 28;
  }
  {
    strcpy(p2.name, "Suraj");
    p2.salary = 200.32;
    p2.age = 26;
  }
  printf("%s\n", p1.name);
  printf("%d", p2.age);
  return 0;
}