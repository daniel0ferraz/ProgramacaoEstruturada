#include <stdio.h>
main()
{
  char Nome[30];
  float Nota, Soma = 0, Media;
  int Cont = 0;

  // Determinar a media dos notas
  printf("Nome:");
  scanf("%s", &Nome);
  ;
  printf("Nota:");
  scanf("%f", &Nota);

  while (Nota != 9999)
  {
    Cont = Cont + 1;
    Soma = Soma + Nota;

    printf("Nome:");
    scanf("%s", &Nome);

    printf("Nota:");
    scanf("%f", &Nota);
  }

  Media = Soma / Cont;
  printf("Media: 1.f%", Media);
}
