#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float temp, newtemp, newtemp2;
  int esca, proxesca;

  printf("Dê um valor de temperatura:\n");
  scanf("%f", &temp);
  printf("Em qual escala está((1)Celsius-(2)Fahrenheit-(3)Kelvin):\n");
  scanf("%d", &esca);
  printf("Em qual escala converter((1)Celsius-(2)Fahrenheit-(3)Kelvin):\n");
  scanf("%d", &proxesca);

  system("clear");
  printf("Informações digitadas: %.2f em %d para %d\n\n", temp, esca, proxesca);

  switch (esca) {

  case 1:
    // Celsius para Fahrenheit
    if (proxesca == 2) {
      newtemp = temp * 1.8 + 32;
      printf("%.2f °C = %.2f °F", temp, newtemp);
    }
    // Celsius para Kelvin
    if (proxesca == 3) {
      newtemp = temp + 273.15;
      printf("%.2f °C = %.2f K", temp, newtemp);
    }
    break;

  case 2:
    // Fahrenheit para Celsius
    if (proxesca == 1) {
      newtemp = (temp - 32) / 1.8;
      printf("%.2f °F = %.2f °C", temp, newtemp);
    }
    // Fahrenheit para Kelvin
    if (proxesca == 3) {
      newtemp2 = (temp - 32) / 1.8;
      newtemp = newtemp2 + 273.15;
      printf("%.2f °F = %.2f K", temp, newtemp);
    }
    break;

  case 3:
    // Kelvin para Celsius
    if (proxesca == 1) {
      newtemp = temp - 273.15;
      printf("%.2f K = %.2f °C", temp, newtemp);
    }
    // Kelvin para Fahrenheit
    if (proxesca == 2) {
      newtemp = 1.8 * (temp - 273) + 32;
      printf("%.2f K = %.2f °F", temp, newtemp);
    }
    break;
  default:
    printf("Escala inválida!");
    break;
  }
  return 0;
}
