#include <stdio.h>
#include <stdlib.h>

//hoi leks ik verander dit

int main()
{
  int getal = 1;

while(1)
{
  printf("getal:\n");
  scanf("%d", &getal);
  printf("\n");

  while(1)
  {
      if(getal == 0)
        {
          printf("yes\n");
          break;
        }
        else
        {
          if(getal == 1)
          {
            printf("no\n");
            break;
          }
          else
          {
            getal = getal - 2;
          }
        }
  }
  printf("\n\n");
}
  return(0);
}
