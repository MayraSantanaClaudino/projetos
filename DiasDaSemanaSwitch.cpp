//Dias da Semana no Switch, C
//May Santana, 2021

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int semana;
	printf("Digite um número para um dia da semana:");
	scanf("%i", &semana);
	
	switch (semana) {
		case 1:
	printf("Domingo: final de semana");
	 break;
	    case 2:
	printf("Segunda feira: dia útil");
	 break;
	    case 3:
	printf("Terça-feira: dia útil");
	 break;
	    case 4:
	printf("Quarta-feira: dia útil");
	 break;
	    case 5:
	printf("Quinta-feira: dia útil");
	 break;
	    case 6:
    printf("Sexta-feira: dia útil");
     break;
        case 7:
    printf("Sábado: fim de semana");
     break;
	}
}
