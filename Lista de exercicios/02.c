#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float notasAlunos[10][3], media[10], soma;

  for (int i = 0; i < 10; i++) {
    printf("Digite as 3 notas do %dº aluno: \n", i + 1);
    soma = 0;
    for (int j = 0; j < 3; j++) {
      printf("%dª Nota: ", j + 1);
      scanf("%f", &notasAlunos[i][j]);
      soma += notasAlunos[i][j];
      media[i] = soma / 3;
    }
    printf("\n");
  }

  for (int i = 0; i < 10; i++) {
    printf("Notas do %dº aluno:", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("\t%.1f", notasAlunos[i][j]);
    }
    printf("\t Média: %.1f", media[i]);

    if (media[i] >= 7) {
      printf("\n(Aprovado)");
    } else {
      printf("\n(Reprovado!)");
    }
    printf("\n\n");
  }
  return 0;
}
