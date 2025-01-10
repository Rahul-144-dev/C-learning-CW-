#include <stdio.h>
#include <string.h>
/* Main Function */
int main()
{
  /* strlen = Calculates the size of a String */
  
  // char *str = "Rahul Saha";
  // printf("%d", strlen(str));

  /* strcpy = make Deep Copy of String */
  
  // char s1[] = "Rahul Saha";
  // char s2[strlen(s1)];
  // strcpy(s2, s1); // copies the S1 into S2
  // s2[0] = 'P';
  // printf("%s\n", s1);
  // printf("%s", s2);

  /* strcat = Concatenate(marge) 2 Strings */
  
  char s1[] = "Rahul";
  char s2[] = "Saha";
  strcat(s1, s2);
  printf("%s", s1);
  return 0;
}