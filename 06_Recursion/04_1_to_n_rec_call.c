#include <stdio.h>
void dec(int n)
{
  if (n == 0)
    return;          // base case
  dec(n - 1);        // call
  printf("%d\n", n); // code
  return;
}
int main()
{
  int n;
  printf("enter number : ");
  scanf("%d", &n);
  dec(n);
  return 0;
}