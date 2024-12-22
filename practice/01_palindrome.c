#include <stdio.h>
int main()
{
  int num;
  printf("enter number : ");
  scanf("%d", &num);
  int org = num;
  int rem, rev;
  while (num != 0)
  {
    rem = num % 10;
    rev = 10 * rev + rem;
    num /= 10;
  }
  if (org == rev)
    printf("palindrome");
  else
    printf("Not");
  return 0;
}