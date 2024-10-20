#include <stdio.h>
int main()
{
  int a = 9;
  int *x = &a;  // int *x = stores address of integer
  int **y = &x; // int **y = stores address of a pointer // it ** means double pointer
  int ***z = &y;
  printf("&x = %p\n", &x);  // prints the address of x
  printf("y  = %p\n", y);   // prints the address of x
  printf("&x = %d\n", *x);  // prints the value of a stores as address in x pointer *
  printf("y  = %d\n", **y); // prints the value of a stores as address in y pointer **
  printf("z  = %p\n", **z);
  return 0;
}