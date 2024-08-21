//. Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number.
//* [roll number here refers to the index of the array.]
#include <stdio.h>
#include <math.h>
int main()
{
    int mark[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter number %d : ", i+1);
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (mark[i] < 35)
            printf("%d ", mark[i]);
    }
    return 0;
}