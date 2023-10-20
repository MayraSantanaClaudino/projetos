//Trabalho da Faculdade sobre achar o maior e o menor número primo em relação a um paramêtro, C
//May Santana, 2021

#include <stdio.h>

void primo(int m, int *p1, int *p2){

  int d, count;
  int i = 0;

  for(count = m; count > *p1; count--){

    d = 0;

    for(int j = 1; j <= count; j++){

      if(count % j == 0){

        d++;
      }
    }

    if(d == 2){

    *p1 = count;
    }
  }

  i = 0;

  for(count = m; count < *p2; count++){

    d = 0;

    for(int j = 1; j <= count; j++){

      if(count % j == 0){

      d++;
      }
    }

    if(d == 2){

      *p2 = count;
    }
  }
}

int main(){

  int m, p1, p2;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Digite o valor do parametro 1 menor que m: ");
    scanf("%d",&p1);

    printf("Digite o valor do parametro 2 maior que m: ");
    scanf("%d", &p2);

    primo(m, &p1, &p2);

    printf("\nO maior numero primo p1 antes de m: %d\nO menor numero primo p2 depois de m: %d\n", p1, p2);

  return 0;
}
