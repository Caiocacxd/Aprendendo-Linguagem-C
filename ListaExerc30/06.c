#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float num, num2, num3, Maior, Menor;
  
  printf("Dê quatro valores:\n");
  scanf("%f %f %f", &num, &num2, &num3);

  system("clear");
  printf("Número digitados: %.2f %.2f %.2f\n\n", num, num2, num3);

  Maior = num;
  Menor = num;

  //Maior que
  if(Maior < num2){
    Maior = num2;
  }
  if(Maior < num3){
    Maior = num3;
  }
  //Menor que
  if(Menor > num2){
    Menor = num2;
  }
  if(Menor > num3){
    Menor = num3;
  }
  printf("O maior número é: %.2f \tO menor número é: %.2f", Maior, Menor);
  
  return 0;
}
