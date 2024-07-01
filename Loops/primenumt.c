#include <stdio.h>
#include <math.h>
int main()
{
    int r1, r2, i, x, c = 0;
    printf("enter range 1 : ");
    scanf("%d", &r1);
    printf("enter range 2 : ");
    scanf("%d", &r2);
    for (i = r1; i <= r2; i++)
    {
        for (x = 1; x <= r2; x++)
        {
            if (i % x == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}