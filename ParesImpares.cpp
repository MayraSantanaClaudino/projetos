//Números Pares e Ímpares, C
//May Santana, 2021

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Entre com um número: ");
	scanf("%d", &n);
	printf("Par\timpar\n");
	
	for(int count=1;count <=n;count++){
		if(count%2 == 0)
		printf("%d\n",count);
		else
		printf("\t%d\n",count);
	}
	system("PAUSE");
}
