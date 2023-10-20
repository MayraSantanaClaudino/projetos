//Matriz, C
//May Santana, 2021

#include <stdio.h>

main()

{

    int linhas=4, colunas=4, i, j;
    int matriz[linhas][colunas];
    
    for(i=0;i<4;i=i+1)

    {

            for(j=0;j<4;j=j+1)

            {

                    matriz[i][j]=i+j;

            }

    }

    for(i=0;i<4;i++)

    {

            for(j=0;j<4;j++)

            {

                 printf("\t%d ",matriz[i][j]);

            }

            printf("\n");

    }

}

