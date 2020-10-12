#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[10];
  int i;

  for (i = 1; i <=10; i++)
  {
    scanf("%d", &x[i]);
  }

  for (i = 1; i <=10; i++)
  {
    printf("X:[%d]", x[i]);
    printf("Indice(%d)\n",i);
  }
}
