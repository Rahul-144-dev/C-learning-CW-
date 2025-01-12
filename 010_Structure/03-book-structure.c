#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  struct Book
  {
    char name[50];
    int pages;
    float price;
  } a, b, c;

  a.pages = 100;
  a.price = 411.5;
  strcpy(a.name, "Scret Seven");

  a.pages = 200;
  a.price = 100.5;
  strcpy(a.name, "Famous Five");

  printf("%d\n", a.pages);
  printf("%.2f\n", a.price);
  printf("%s\n", a.name);
  return 0;
}