#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float num, num2, num3, num4, soma = 0;
  
  printf("Dê quatro valores:\n");
  scanf("%f %f %f %f", &num, &num2, &num3, &num4);

  system("clear");
  printf("Números digitados: %.2f %.2f %.2f %.2f\n\n", num, num2, num3, num4);

  soma = num + num2 + num3 + num4;
  
  printf("A soma desses números é: %.2f ", soma);
  
  return 0;
}
