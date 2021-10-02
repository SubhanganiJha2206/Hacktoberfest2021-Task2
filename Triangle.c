#include <stdio.h>
int main() 
{
   int i;
   int s; 
   int r; 
   int a = 0;

   printf("Enter the number of rows: ");
   scanf("%d", &r);

   for (i = 1; i <= r; ++i, a = 0) 
   {
      for (s = 1; s <= r - i; ++s)
      {
         printf("  ");
      }
      while (a != 2 * i - 1) 
      {
         printf("* ");
         ++a;
      }

      printf("\n");
   }
  return 0;
}
