//Calculadora, C
//May Santana, 2021

#include <stdio.h>

double A, B, R;

void entrada(){

	printf("informe o valor de A:");
	scanf("%lf",&A);
	printf("informe o valor de B:");
	scanf("%lf",&B);

}

void saida(){

	printf("O resultado de A com B e %.2lf \n",R);

}

void rotSoma(){

	entrada();
	R = A+B;
	saida();

}

void rotSubtracao(){

	entrada();
	R = A-B;
	saida();

}

void rotMultiplicacao(){

	entrada();
	R = A*B;
	saida();

}

void rotDivisao(){

	entrada();
	R = A/B;
	saida();

}

main(){	

  int opcao=0;

	while(opcao != 5){

	  printf("1 - Soma\n");
	  printf("2 - Subtracao\n");
	  printf("3 - Multiplicacao\n");
	  printf("4 - Divisao\n");
	  printf("5 - Sair\n");
	  printf("Digite a sua opcao:");
	  scanf("%d",&opcao);

	  switch(opcao){

	  	case 1: rotSoma();
	  	    break;  
	  	case 2: rotSubtracao();
	  	    break;
	  	case 3: rotMultiplicacao();
	  	    break;
	  	case 4: rotDivisao();
	  	    break;
	  	case 5: printf("saindo...");
	  	    break; 
	  	default:printf("opcao inválida");
	  	    break;

	  }
  }
}
