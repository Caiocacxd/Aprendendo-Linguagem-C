#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int idade[5];
  float alturas[5];

  for (int i = 0; i < 5; i++) {
    printf("\n%dª Pessoa\nIdade: ", i + 1);
    scanf("%d", &idade[i]);
    printf("Altura: ");
    scanf("%f", &alturas[i]);
  }

    for (int j = 4; j >= 0; j--) {
      printf("\nPessoa %d \tIdade: %d\tAltura: %.2f\n", j+1, idade[j], alturas[j]);
  }
 }
