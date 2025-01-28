#include <myfunc.h>
#define pi 3.14159265359
#define area(r) (pi * r * r)
float area_c(float r);
int main()
{
  printf("%f", area(5.3));
  return 0;
}
float area_c(float r)
{
  return pi * r * r;
}