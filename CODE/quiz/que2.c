#include <stdio.h>
int main()
{
      int y = 0;
      if (1 | (y = 1))
      {
            printf("y id %d\n", y);
      }
      else
      {
            printf(" %d\n", y);
      }
}