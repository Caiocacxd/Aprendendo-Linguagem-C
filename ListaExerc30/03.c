#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float num, num2, Maior, Menor;
  
  printf("Dê dois valores:\n");
  scanf("%f %f", &num, &num2);

  system("clear");
  printf("Número digitados: %.2f %.2f\n\n", num, num2);

  if(num > num2){
    Maior = num;
    Menor = num2;
  }else{
    Maior = num2;
    Menor = num;
  }

  printf("O maior número é: %.2f \tO menor número é: %.2f", Maior, Menor);
  
  return 0;
}
