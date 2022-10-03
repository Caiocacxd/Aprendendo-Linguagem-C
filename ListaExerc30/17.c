#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
 int count = 0;
 char digitConso[10], vetor[10], vogais[10] = {"A","a", "E","e", "I", "i", "O", "o", "U", "u"};

  for(int i = 0; i < 10; i++){ 
    printf("Letra [%d]: ", i+1);
    scanf("%s", &vetor[i]);
      for(int j = 0; j < 10; j++){    
        if(vetor[i] == vogais[j]){
          count = 0;
        }else{
          count += 1;
          digitConso[i] = vetor [i];
        }
      }
  }
    system("clear");
    printf("Número de consoantes digitadas: %d\n", count);
    printf("Consoantes digitadas: ");
    for(int i = 0; i < 10; i++){
      printf("%c ", digitConso[i]);
    }  
 return 0;
}
