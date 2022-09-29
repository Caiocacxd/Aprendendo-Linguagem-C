#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

float valor[10];

void MaiorMenor() {
  float Maior = valor[0];
  float Menor = valor[0];

  for (int i = 1; i < 10; i++) {
    if (valor[i] > Maior) {
      Maior = valor[i];
    } else if (valor[i] < Menor) {
      Menor = valor[i];
    }
  }

  printf("\n\n\tO menor valor é: %.1f\t", Menor);
  printf("O maior valor é: %.1f", Maior);
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  printf("Digite 10 valores:\n");
  printf("> ");
  scanf("%f", &valor[0]);

  for (int i = 1; i < 10; i++) {
    printf("> ");
    scanf("%f", &valor[i]);
  }
  system("clear");
  MaiorMenor();
  return 0;
}
