#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int num;
void NumPrimo();

int main() {
  setlocale(LC_ALL, "Portuguese");

  printf("Dê um número natural:\n");
  scanf("%d", &num);

  system("clear");
  NumPrimo();
  return 0;
}

void NumPrimo() {
  int i, resultado = 0;

  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      resultado++;
      break;
    }
  }

  printf("Número digitado: %d\n", num);

  if (resultado == 0) {
    printf("\nÉ um número primo!!!");
  } else {
    printf("Não é um número primo...");
  }
}
