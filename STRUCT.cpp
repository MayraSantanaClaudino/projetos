//Menu de Compras de um Produto, C
//May Santana, 2021

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Produto{
	
	int codigo;
	char nomeProd[20];
	float preco;
	char tipo;

};

float calcPrecoVenda(char tip, float pcusto){

	if (tip=='P')
	  return pcusto*1.4;
	 else 
	  return pcusto*1.25;

}

main(){

	struct Produto meuProd;

	float precoV;

	printf("Informe o codigo do produto:");
	scanf("%d",&meuProd.codigo);

	printf("Informe o nome do produto:");
	scanf("%s",&meuProd.nomeProd);

	printf("Informe o preco de custo do produto:");
	scanf("%f",&meuProd.preco);

	printf("Informe o tipo do produto (P - perecivel, N-Nao perecivel):");
	scanf("%s",&meuProd.tipo);

	
	precoV = calcPrecoVenda(meuProd.tipo,meuProd.preco);

	
	printf("codigo:%d\n",meuProd.codigo);
	printf("nome:%s\n",meuProd.nomeProd);
	printf("Preco custo:%.2f\n",meuProd.preco);
	printf("Preco venda:%.2f\n",precoV);

}
