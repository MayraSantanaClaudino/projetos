//Trabalho da Faculdade sobre verificar o gabarito de um sorteio, C
//May Santana, 2021

#include <stdio.h>

void verifica(int gabarito[], int apostadores[10][13]){

  int ac;
  int i = 0;

  for(int k = 0; k < 10; k++){

    i = 0;

    while(i != 1){
      
      ac = 0;

      for(int j = 0; j < 13; j++){

        if(gabarito[j] == apostadores[k][j]){

          ac++;
          
        }
      }

      if(ac == 13){

      printf("PARABENS VOCE ESTÁ MILIONÁRIO, apostador %d", (k + 1));

      }
      
      i = 1;
      
    }
  }
}

int main(){

  int i, j, apostadores[10][13], gabarito[13];
  printf("Digite o gabarito do sorteio:\n");

  for(i = 0; i < 13; i++){

    scanf("%d", &gabarito[i]);
    
  }

  for(j = 0; j < 10; j++){

    printf("\nDigite o jogo do apostador %d do sorteio:\n", (j + 1));

    for(i = 0; i < 13; i++){

      scanf("%d", &apostadores[j][i]);
      
    }
  }

  verifica(gabarito, apostadores);

  return 0;
}
