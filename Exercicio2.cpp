#include <stdlib.h>
#include <stdio.h>

void troca(int *x, int i, int j)
{
	int aux;
	aux = x[i];
	x[i] = x[j];
	x[j] = aux;
}

int part (int *x, int p, int r) { // trocar o v[] para *x
	int pivo, i, j;  // trocar p por pivo para melhor entendimento
					// remover variavel t por se tornar inutil no codigo;
	
	pivo = x[(p + r) / 2]; // colocar esta alocação em primeiro
		// faltou usar o resultado pomo index do vetor 
	i = p - 1; // decrementar p por um
	j = r + 1; // incrementar r por um
	
	while (i < j) // trocar menor igual para menor
	{ // trocar para somente while
		do // trocar para do while para ser sempre executado primeiro
		{
			i++;	
		}	
		while (x[i] < pivo);	
		do // troca para do while tambem
		{
			j--;	
		}	
		while (x[j] > pivo);
			
		if (i < j) // trocar menor igual para menor 
		{
			troca(x, i, j); // trocar para função facilitando entedimento e funcionamento do codigo
		}
	}  
	
	return j; // trocar para return j
}


void quicksort(int *x, int p, int r)
{
	int q;
	if(p < r)
	{
		q = part(x,p,r);
		quicksort(x,p,q);
		quicksort(x,q+1,r);
	}
}

void imprimir(int *x, int n)
{
	int i;
	printf("[ ");
	for(i = 0; i < n; i++)
		printf("%d ",x[i]);
	printf("]\n");
}

int main()
{
	int x[10], i;
	
	for (i = 0; i <= 9; i++)
	{
		printf("Digite o [%d]: ",i+1);
		scanf("%d",&x[i]);
	}
	
	
	int tam = sizeof(x)/sizeof(int);
	
	imprimir(x,tam);
	
	quicksort(x, 0, tam-1);
	
	imprimir(x,tam);
}
