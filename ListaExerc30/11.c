#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void Intervalo();
int num, maior, menor;

int main() {
  setlocale(LC_ALL, "Portuguese");

  printf("Dê um valor inteiro:\n");
  scanf("%d", &num);
  printf("Dê um intervalo para compará-lo(maior e menor):\n");
  scanf("%d %d", &maior, &menor);

  system("clear");
  printf("Número inteiro: %d Intervalo: De %d até %d\n\n", num, maior, menor);

  Intervalo();

  return 0;
}

void Intervalo(){
  if(menor <= num && num <= maior){
    printf("Este valor está no intervalo!!!");
  }else{
    printf("Este valor não esta no intervalo...");
  }
}
