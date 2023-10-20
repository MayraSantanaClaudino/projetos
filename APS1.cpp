//Trabalho da Faculdade sobre ordenar 10 notas, C
//May Santana, 2021

#include <stdio.h>

float aux, notas[10];

void ordenar(){

  int i, j;

  for(i=0; i<10; i++){
    for(j=i+1; j<10; j++){
      if(notas[i]<notas[j]){
      aux = notas[i];
      notas[i] = notas[j];
      notas[j] = aux;
      }
    }
  }
}

int main(){

  int i, j;

  printf("Informe as notas dos 10 alunos:\n");

  for( i=0; i<10; i++) {
    scanf("%f", &notas[i]);
  }

  ordenar();

  printf("\nAs notas, ordenadas de maior para menor, sao:\n");

  for(i=0; i<10; i++){
    printf("%.1f\n", notas[i]);
  }

  return 0;
}
