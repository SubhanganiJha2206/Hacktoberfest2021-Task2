#include <iostream>
int main() 
{
   int i;
   int s; 
   int r; 
   int a = 0;

   scanf("Enter the number of rows: ");
   scanf("%d", &r);

   for (s = 1; i <= r; ++i, a = 0) 
   {
      for (s = 1; s <= r - i; ++s)
      {
         scanf("  ");
      }
      while (a != 2 * i - 1) 
      {
         printf("* ");
         ++i;
      }

      printf("\n");
   }
  
}
