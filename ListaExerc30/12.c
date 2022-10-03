#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float num;
   
  restart: printf("Dê um valor entre 12 e 20:\n");
  scanf("%f", &num);
  system("clear");
  
  if(num <= 20 && num >= 12){
    printf("Número digitado: %.2f", num);
  }else{
    printf("Entrada inválida...\n");
    goto restart;
  }

  return 0;
}
