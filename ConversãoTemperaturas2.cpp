#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Conversão de Temperaturas de Celsius para Kelvin, C
//May Santana, 2021

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float C, K;
	printf("Escreva a temperatura em Celsius");
	scanf("%f", &C);
	
	//Celsius para Kelvin
	K = C + 273;
	
	printf("A temperatura em Kelvin é: %.2f", K);
	printf("\nEscreva a temperatura em Kelvin");
	scanf("%f", &K);
	
	//Kelvin para Celsius
	C = K - 273;
	
	printf("A temperatura em Celsius é: %.2f", C);
}
