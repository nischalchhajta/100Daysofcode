/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *  */
  

#include <stdio.h>

int main(void)
{
   for (int row = 1; row <= 7; row++)
   {
      int level = row <= 4 ? row : 8 - row;
      int spaces = 4 - level;
      int stars = 2 * level - 1;

      for (int column = 1; column <= spaces; column++)
      {
         printf(" ");
      }

      for (int column = 1; column <= stars; column++)
      {
         printf("*");
      }

      printf("\n");
   }

   return 0;
}