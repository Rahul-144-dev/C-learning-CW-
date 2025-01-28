#include <myfunc.h>
int main()
{
  int a;
  scanf("%d", &a);
  char c;
  scanf("%c", &c);
  int b;
  scanf("%d", &b);
  switch (c)
  {
  case '+':
    printf("%d", a + b);
    break;
  case '-':
    printf("%d", a - b);
    break;
  case '*':
    printf("%d", a * b);
    break;
  case '/':
    printf("%f", (float)a / b);
    break;
  default:
    printf("Invaild Operator");
  }
  return 0;
}