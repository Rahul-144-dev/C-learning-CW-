/*Ques : WAP to print odd numbers from 1 to 100.*/
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue; // skip means if i%2==0 that will skip
            printf("%d ", i);
        }
    }

    return 0;
}