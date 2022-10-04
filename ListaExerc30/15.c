#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  float NotasAlunos[3][3], media, maior = 0;

  for (int i = 0; i < 3; i++) {
    media = 0;
    for(int j = 0; j < 3; j++){
      printf("\nAluno %d Notas: ", i + 1);
      scanf("%f", &NotasAlunos[i][j]);
      media = (NotasAlunos[i][0] + NotasAlunos[i][1]) / 2;
      maior = NotasAlunos[i][0]; 
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(media <= 6){
            if(NotasAlunos[i][j] > maior){
              maior = NotasAlunos[i][j];
              media = (maior + NotasAlunos[i][2]) / 2;
              printf("Nota Final: %.2f", media);
            }
        }else{
          printf("Nota Final: %.2f\n", media);
          printf("Aprovado!\n");
        }
    }
  }
} 
