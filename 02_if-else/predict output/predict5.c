#include <stdio.h>
#include <math.h>
int main()
{
    int x = 3, y, z;
    y = x = 10;
    z = x < 10;
    printf("\nx=%dy=%dz=%d", x, y, z);
    return 0;
}