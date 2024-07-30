/*Ques : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.*/
#include <stdio.h>
#include <math.h>
int main()
{
    char A = 'A', Z = 'Z', a = 'a', b = 'b';
    while (A <= Z)
    {
        printf("the ASCII value of %c is %d and %c is %d\n", A, A, a, a);
        A++, a++;
    }
    return 0;
}