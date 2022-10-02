#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int num, num2, num3, num4, soma = 0, media = 0;
  
  printf("Dê quatro valores inteiros:\n");
  scanf("%d %d %d %d", &num, &num2, &num3, &num4);

  system("clear");
  printf("Números digitados: %d %d %d %d\n\n", num, num2, num3, num4);

  soma = num + num2 + num3 + num4;
  media = soma / 4;
  
  printf("A media desses números é: %d ", media);
  
  return 0;
}
