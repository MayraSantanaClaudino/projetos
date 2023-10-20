//Trabalho da Fcauldade sobre coletar dados de uma pesquisa, C
//May Santana, 2021

#include <stdio.h>
#include <stdlib.h>

int i, q;
char sexo[100];
char corOlho[100];
char corCabelo[100]; 
int idade[100];

void maior_idade(int idade[]){
  
int maior_idade=0;

   for(i=0; i<100; i++){
    if(idade[i]>maior_idade){
      
      maior_idade = idade[i];
      
    }
  }

  printf("\nA maior idade dentre as pessoas pesquisadas eh %d\n\n", maior_idade);
}

void sexo_idade (int idade[], char sexo[]){

  q=0;
  
  for(i=0; i<100; i++){
    
    if(sexo[i] == 'F' && idade[i] > 18 && idade[i] < 35){

      q++;
        
    }
  }

   printf("A quantidade de mulheres com idade entre 18 e 35 anos eh %d\n\n", q);
}

void olho_cabelo (char corOlho[], char corCabelo[]){

  q=0;
  
  for(i=0; i<100; i++){
    
    if(corOlho[i] == 'V' && corCabelo[i] == 'L'){

      q++;
      
    }
  }
  
  printf("A quantidade de individuos com olhos verdes e cabelos louros eh %d", q);
}

int main(){

  int j;

  printf("=============================\nPara sexo digite:\nF = Feminino\nM = Masculino\n=============================\n=============================\nPara cor dos olhos digite:\nA = Azuis\nV = Verdes\nC = Castanhos\n=============================\n=============================\nPara cor do cabelo digite:\nL = Louros\nC = Castanhos\nP = Pretos\n=============================");

  for(i = 0; i < 100; i++){

    printf("\n\nPreencha a ficha da pessoa %d\n", (i + 1));
    
    for(j = 1; j <= 4; j++){

      switch(j){

        case 1:
          printf("Digite o seu sexo:");
          scanf("%c", &sexo[i]);
          fflush(stdin);
          break;       
        case 2:
          printf("Digite a cor dos olhos:");
          scanf("%c", &corOlho[i]);
          fflush(stdin);
          break;
        case 3:
          printf("Digite a cor dos cabelos:");
          scanf("%c", &corCabelo[i]);
          fflush(stdin);
          break;
        case 4:
          printf("Digite a sua idade:");
          scanf("%d", &idade[i]);
          fflush(stdin);
          break;
      }
    }
  }

  maior_idade(idade);
  sexo_idade(idade, sexo);
  olho_cabelo(corOlho, corCabelo);

  return 0;
}
