#include <stdio.h>
#include <math.h>
int main()
{
    int x = 4, y = 3, z = x-- - y;
    printf("\n%d %d %d", x, y, z);
    return 0;
}