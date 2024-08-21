/*Ques : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using Type Casting.*/
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 65; i <= 90; i++)
    {
        char ch = (char)i;
        printf("%c-> ", i);
        printf("%d\n", i);
    }
    return 0;
}