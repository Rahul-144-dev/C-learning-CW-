#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void main()
{
  int (*funcArr[])(int, int) = {add, subtract, mul, div};
  int result = funcArr[0](5, 3); // Calls add(5, 3)
  printf("%d", result);
}
int add(int a, int b)
{
  return a + b;
}
int subtract(int a, int b)
{
  return a - b;
}
int mul(int a, int b)
{
  return a * b;
}
int div(int a, int b)
{
  if (b != 0)
  {
    return a / b;
  }
  else
  {
    printf("Error: Division by zero\n");
    return 0; // Return 0 or handle the error as needed
  }
}
