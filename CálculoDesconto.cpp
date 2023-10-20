#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Cálculo de Desconto em uma Compra, C
//May Santana, 2021

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float compra;
	char nome;
	int bonus;
	
	printf("Parabéns!Você ganhou um bonus de 10% na sua última compra, siga as instruções para resgatá-lo!");
	printf("\nDigite seu nome");
	scanf("%s", &nome);
	printf("\nDigite o valor da sua compra");
	scanf("%f", &compra);
	
	//Desconto
	bonus = compra - (compra*0.1);
	
	printf("\nParabéns!Seu produto agora custa: %.2i", bonus);
	
}
