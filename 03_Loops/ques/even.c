/*Ques : Print all the even numbers from 1 to 100*/
#include <stdio.h>
#include <math.h>
int main()
{
    int r1, r2, n;
    printf("enter range 1 : ");
    scanf("%d", &r1);
    printf("enter range 2 : ");
    scanf("%d", &r2);
    for (int i = r1; i <= r2; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
    return 0;
}