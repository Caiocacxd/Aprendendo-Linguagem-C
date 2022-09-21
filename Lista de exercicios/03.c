#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vet1[10], vet2[10], vet3[20];

  for (int i = 0; i < 10; i++) {
    printf("\nDigite o %dº número do Vetor 1: ", i + 1);
    scanf("%d", &vet1[i]);
  }

  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("\nDigite o %dº número do Vetor 2: ", i + 1);
    scanf("%d", &vet2[i]);
  }

  for (int i = 0; i < 10; i++) {
    vet3[i*2] = vet1[i];
  }
  for (int i = 0; i < 10; i++) {
    vet3[i*2+1] = vet2[i];
  }
   
  printf("\n\nVetor 3 intercalado:\n");
  for (int i = 0; i < 20; i++) {
    printf("%d ", vet3[i]);
  }

  return 0;
}
