#include <stdlib.h>
#include <stdio.h>

/*
1) O programa escrito acima realiza a ordenação decrescente de um vetor de números inteiros. Implemente o algoritmo de ordenação  ____________________.
*/

// TIPO : Bouble Sort

int x[10], n, i, aux, flag;
int count1, count2, count3;

void inserir()
{
	for (i = 0; i < 10; i++)
	{
		printf("\n Valor [%d]: ",i+1);
		scanf("%d",&x[i]);
		count1++;
	}	
	
	flag = 1;
	n = 1;
	
	do
	{
		flag = 0;
		
		for(i = 0; i < 9; i++)
		{
			if(x[i] < x[i+1])
			{
				flag = 1;
				aux = x[i];
				x[i] = x[i+1];
				x[i+1] = aux;	
			}
			
			count3++;	
		}
	n++;
	count2++;
	}
	while(n <= 10 && flag == 1);
}

int main()
{
	int opc;
	
	do
	{
		printf("\n 1 - Inserir");
		printf("\n 2 - Apresentar");
		printf("\n 0 - Sair");
		printf("\n ESCOLHA:");
		scanf("%d",&opc);
		
		switch(opc)
		{
			case 1: inserir(); break;
			case 2:
				for(i = 0; i < 10; i++)
				{
					printf("\n Valor [%d]: %d", i+1, x[i]);
				}
				printf("\n Contador 1: %d", count1);
				printf("\n Contador 2: %d", count2);
				printf("\n Contador 3: %d", count3);	
			break;
		}
	}
	while (opc!=0);
}
