#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float var1, var2, var3;
void MaiorMenor(); 

int main() {
  setlocale(LC_ALL, "Portuguese");

  printf("Digite 3 valores:\n");
  scanf("%f %f %f", &var1, &var2, &var3);

  system("clear");
  MaiorMenor();
  return 0;
}

void MaiorMenor() {
  float Maior = var1;
  float Menor = var1;

  if(Menor > var2){
    Menor = var2;
  }if(Menor > var3){
    Menor = var3;
  }

  if(Maior < var2){
    Maior = var2;
  }if(Maior < var3){
    Maior = var3;
  }

  printf("Numeros digitados: %.2f %.2f %.2f", var1, var2, var3);
  printf("\n\n\tO menor valor é: %.2f\t", Menor);
  printf("O maior valor é: %.2f", Maior);
}
