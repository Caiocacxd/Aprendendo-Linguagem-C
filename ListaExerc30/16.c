#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
  
    int var1, var2, var3;
    
    restart: printf("Digite três valores para os lados de um triângulo:\n");
    scanf("%d %d %d", &var1, &var2, &var3);
    if(var1 == 0 || var2 == 0 || var3 == 0){
      printf("\n\nValor inválido! Digite outro valor...\n");
      goto restart;
    }

    if(var1 < var2 + var3 && var2 < var1 + var3 && var3 < var1 + var2){
    printf("\nEstes valores formam um triângulo:\n");
     
      if(var1 == var2  && var1 == var3){
        printf("\nUm triângulo equilátero.");
      }else if(var1 == var2 || var1 == var3 || var2 == var3){
        printf("\nUm triângulo isósceles.");
      }else if(var1 != var2 != var3){
        printf("\nUm triângulo escaleno.");
      }
      
    }else{
    printf("\nEstes valores não formam um triângulo...\n");
    }
  
 return 0;
}
