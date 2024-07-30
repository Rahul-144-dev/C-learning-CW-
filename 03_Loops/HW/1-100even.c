/*WAP to print all the even number from 1 to 100 using continue statement*/
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}