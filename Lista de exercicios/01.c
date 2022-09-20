#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int iPar, iImpar, i, num[20], numPar[20], numImpar[20];
  iPar = 0;
  iImpar = 0;

  for (i = 0; i < 20; i++) {
    printf("\nDigite o %dº número: ", i + 1);
    scanf("%d", &num[i]);

    if (num[i] % 2 == 0) {
      numPar[iPar] = num[i];
      iPar++;
    } else {
     numImpar[iImpar] = num[i];
      iImpar++;
    }
  }

  printf("\nVetor com os números digitados:\n");
  for (i = 0; i < 20; i++) {
    printf("%d ", num[i]);
  }
  printf("\nVetor dos números Pares:\n");
  for (i = 0; i < iPar; i++) {
    printf("%d ", numPar[i]);
  }

  printf("\nVetor dos números Impares:\n");
  for (i = 0; i < iImpar; i++) {
    printf("%d ", numImpar[i]);
  }
  return 0;
}
