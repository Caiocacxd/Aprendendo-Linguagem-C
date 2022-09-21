#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int i;
  float valor[10], Maior, Menor;

  printf("Digite 10 valores:\n");
  printf("> ");
  scanf("%f", &valor[0]);
  Maior = valor[0];
  Menor = valor[0];
  
  for(int i = 1; i < 10; i++){
    printf("> ");
    scanf("%f", &valor[i]);
    if(valor[i] > Maior){
      Maior=valor[i];
    }else if(valor[i] < Menor){
      Menor=valor[i];
    }
  }

  printf("O menor valor é: %.1f", Menor);
  printf("O maior valor é: %.1f", Maior);

  return 0;
}
