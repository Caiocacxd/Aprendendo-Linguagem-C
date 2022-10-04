#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
  
    int idade, pessoas = 0 , maior, menor, media = 0, soma = 0;
    
    printf("Digite a idade de uma pessoa(idade 0 para encerrar): ");
    scanf("%d", &idade);

    menor = idade;
    maior = idade;    
  
    while (idade != 0){
        pessoas ++;
        soma = soma + idade ;
         
        printf("\nDigite a idade de uma pessoa(idade 0 para encerrar): ");
        scanf("%d", &idade);
        
        if (idade < menor && idade != 0){
            menor = idade;
        }
        if (idade > maior){
            maior = idade;  
        }   
    }
    
    media = soma / pessoas;
    printf("\nNumero de pessoas: %d\n", pessoas);
    printf("\nMedia de idade: %d\n", media);
    printf("\nMaior Idade: %d \tMenor Idade: %d\n", maior, menor);
  
 return 0;
}
