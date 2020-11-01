#include <stdio.h>
int main()
{
  int s[5];
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    s[i] = 0;
    for (j = 1; j <= i; j++)
    {
      s[i] = s[i] + j;
    }
  }

  for (i = 1; i <= 5; i++)
    printf("Resultado: %d\n", s[i] - s[5 - i + 1]);
}
