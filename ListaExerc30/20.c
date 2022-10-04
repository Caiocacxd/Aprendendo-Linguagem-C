#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int  i, num[5], soma = 0, multi = 1;

  for (i = 0; i < 5; i++) {
    printf("\nDigite o %dº número: ", i + 1);
    scanf("%d", &num[i]);
    soma = soma + num[i];
    multi = multi * num[i];
  }
  system("clear");

  printf("Números digitados:\n");
  for(i = 0; i < 5; i++){
  printf("%d\t", num[i]);
  } 
  printf("\n\nA Soma desses números é: %d\n", soma);
  printf("\nO produto desses números é: %d\n", multi);
  
  return 0;
}
