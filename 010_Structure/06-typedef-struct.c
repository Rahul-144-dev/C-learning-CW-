#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  typedef struct book
  {
    char name[100];
    int pages;
    float price;
  } book;

  book a;
  book b;
  book c;

  {
    strcpy(a.name, "48 Laws");
    a.pages = 100;
    a.price = 200.23;
  }

  printf("%s\n", a.name);
  printf("%d\n", a.pages);
  printf("%.2f\n", a.price);
  return 0;
}