/*Ques : Display this AP - all terms which are positive.*/
#include <stdio.h>
#include <math.h>
int main()
{
    // int n;
    // printf("enter number : ");
    // scanf("%d", &n);
    /*100 97 94 91*/
    int x = 100;
    for (int i = 1; x > 0; i++)
    {
        printf("%d ", x);
        x -= 3;
    }
    return 0;
}