#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, c = 0, r1, r2;
    printf("enter range 1 : ");
    scanf("%d", &r1);
    printf("enter range 2 : ");
    scanf("%d", &r2);
    for (i = r1; i <= r2; i++)
    {
        if (i % 2 != 0 && i % (i - 1) != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
