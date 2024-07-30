#include <stdio.h>
#include <math.h>
int main()
{
    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            printf("%d%d", x, y);
    }
    return 0;
}