#include <stdio.h>
int main() 
{
   int i;
   int s; 
   int r; 
   int a = 0;

   printf("Enter the number of rows: ");
   scanf("%d", &r); //take user input

   for (i = 1; i <= r; ++i, a = 0) 
   {
      for (s = 1; s <= r - i; ++s)
      {
         printf("  "); // this line for space
      }
      while (a != 2 * i - 1) 
      {
         printf("* "); // this line for print *
         ++a;
      }

      printf("\n");
   }
  return 0;
}
