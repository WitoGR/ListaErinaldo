#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int val = 6;

int vetA[6] = {2, 4, 6, 8, 10, 12};
int vetB[6] = {11, 9, 7, 5, 3, 1};
int vetC[6] = {5, 7, 2, 8, 1, 6};

int vetD[12] = {2, 4, 6, 8, 10, 12, 11, 9, 7, 5, 3, 1};
int vetE[12] = {2, 4, 6, 8, 10, 12, 1, 3, 5, 7, 9, 11};

int vetF[10] = {8, 9, 7, 9, 3, 2, 3, 8, 4, 6};
int vetG[10] = {89, 79, 32, 38, 46, 26, 43, 38, 32, 79};

// -----------------------------------------

void zerar()
{
 	vetA[0] = 2; vetA[1] = 4; vetA[2] = 6; vetA[3] = 8; vetA[4] = 10; vetA[5] = 12;
 	
 	vetB[0] = 11; vetB[1] = 9; vetB[2] = 7; vetB[3] = 5; vetB[4] = 3; vetB[5] = 1;
 	
 	vetC[0] = 5; vetC[1] = 7; vetC[2] = 2; vetC[3] = 8; vetC[4] = 1; vetC[5] = 6;

	vetD[0] = 2; vetD[1] = 4; vetD[2] = 6; vetD[3] = 8; vetD[4] = 10; vetD[5] = 12;
	vetD[6] = 11; vetD[7] = 9; vetD[8] = 7; vetD[9] = 5; vetD[10] = 3; vetD[11] = 1;
	
	vetE[0] = 2; vetE[1] = 4; vetE[2] = 6; vetE[3] = 8; vetE[4] = 10; vetE[5] = 12;
	vetE[6] = 1; vetE[7] = 3; vetE[8] = 5; vetE[9] = 7; vetE[10] = 9; vetE[11] = 11;

	vetF[0] = 8; vetF[1] = 9; vetF[2] = 7; vetF[3] = 9; vetF[4] = 3; vetF[5] = 2;
	vetF[6] = 3; vetF[7] = 8; vetF[8] = 4; vetF[9] = 6;
 	
 	vetG[0] = 89; vetG[1] = 79; vetG[2] = 32; vetG[3] = 38; vetG[4] = 46; vetG[5] = 26;
	vetG[6] = 43; vetG[7] = 38; vetG[8] = 32; vetG[9] = 79;
}

// -----------------------------------------

void apresentar()
{
	int opc2, i;
	
	do
	{
		system("cls");
		
		printf("\033[0;36m");
		printf("\n <----<< Apresentar Vetores >>---->\n");
		printf("\033[0m");
		
		printf("\n             1 - a)");
		printf("\n             2 - b)");
		printf("\n             3 - c)");
		printf("\n             4 - d)");
		printf("\n             5 - e)");
		printf("\n             6 - f)");
		printf("\n             7 - g)");
		printf("\n\n             0 - Sair");
		printf("\n\n ESCOLHA: ");
		scanf("%d",&opc2);
		
		switch(opc2)
		{
			case 1:
				system("cls");
				printf("\n             =[ VETOR S1 ]= \n");
				printf("              [ ");
					for(i = 0; i < 5; i++)
					{
						printf("%d, ",vetA[i]);
					}
					printf("%d ",vetA[5]);
				printf("]");
			break;
			
			case 2:
				system("cls");
				printf("\n             =[ VETOR S2 ]= \n");
				printf("              [ ");
					for(i = 0; i < 5; i++)
					{
						printf("%d, ",vetB[i]);
					}
					printf("%d ",vetB[5]);
				printf("]");
			break;
			
			case 3:
				system("cls");
				printf("\n             =[ VETOR S3 ]= \n");
				printf("              [ ");
					for(i = 0; i < 5; i++)
					{
						printf("%d, ",vetC[i]);
					}
					printf("%d ",vetC[5]);
				printf("]");
			break;
			
			case 4:
				system("cls");
				printf("\n             =[ VETOR S4 ]= \n");
				printf("              [ ");
					for(i = 0; i < 11; i++)
					{
						printf("%d, ",vetD[i]);
					}
					printf("%d ",vetD[11]);
				printf("]");
			break;
			
			case 5:
				system("cls");
				printf("\n             =[ VETOR S5 ]= \n");
				printf("              [ ");
					for(i = 0; i < 11; i++)
					{
						printf("%d, ",vetE[i]);
					}
					printf("%d ",vetE[11]);
				printf("]");
			break;
			
			case 6:
				system("cls");
				printf("\n             =[ VETOR S6 ]= \n");
				printf("              [ ");
					for(i = 0; i < 9; i++)
					{
						printf("%d, ",vetF[i]);
					}
					printf("%d ",vetF[9]);
				printf("]");
			break;
			
			case 7:
				system("cls");
				printf("\n             =[ VETOR S7 ]= \n");
				printf("              [ ");
					for(i = 0; i < 9; i++)
					{
						printf("%d, ",vetG[i]);
					}
					printf("%d ",vetG[9]);
				printf("]");
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc2 != 0);
}

// -----------------------------------------

void boubleSort()
{
	zerar();
	
	int opc3, i, j, aux;
	int count = 0, count2 = 0;
	
	do
	{
		system("cls");
		
		printf("\033[0;36m");
		printf("\n <----<< Bouble Sort >>---->\n");
		printf("\033[0m");
		
		printf("\n            1 - a)");
		printf("\n            2 - b)");
		printf("\n            3 - c)");
		printf("\n            4 - d)");
		printf("\n            5 - e)");
		printf("\n            6 - f)");
		printf("\n            7 - g)");
		printf("\n\n            0 - Sair");
		printf("\n\n ESCOLHA: ");
		scanf("%d",&opc3);
		
		switch(opc3)
		{
			case 1:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 5; j++)
				{
					for(i = 5; i >= j; i--)
					{
						if(vetA[i] < vetA[i-1])
						{
							aux = vetA[i];
							vetA[i] = vetA[i-1];
							vetA[i-1] = aux;	
						}
						count2++;
					}	
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 2:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 5; j++)
				{
					for(i = 5; i >= j; i--)
					{
						if(vetB[i] < vetB[i-1])
						{
							aux = vetB[i];
							vetB[i] = vetB[i-1];
							vetB[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 3:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 5; j++)
				{
					for(i = 5; i >= j; i--)
					{
						if(vetC[i] < vetC[i-1])
						{
							aux = vetC[i];
							vetC[i] = vetC[i-1];
							vetC[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 4:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 11; j++)
				{
					for(i = 11; i >= j; i--)
					{
						if(vetD[i] < vetD[i-1])
						{
							aux = vetD[i];
							vetD[i] = vetD[i-1];
							vetD[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 5:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 11; j++)
				{
					for(i = 11; i >= j; i--)
					{
						if(vetE[i] < vetE[i-1])
						{
							aux = vetE[i];
							vetE[i] = vetE[i-1];
							vetE[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 6:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 9; j++)
				{
					for(i = 9; i >= j; i--)
					{
						if(vetF[i] < vetF[i-1])
						{
							aux = vetF[i];
							vetF[i] = vetF[i-1];
							vetF[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 7:
				count = 0, count2 = 0;
				system("cls");
				for(j = 1; j <= 9; j++)
				{
					for(i = 9; i >= j; i--)
					{
						if(vetF[i] < vetG[i-1])
						{
							aux = vetG[i];
							vetG[i] = vetG[i-1];
							vetG[i-1] = aux;	
						}
						count2++;
					}
					count++;	
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc3 != 0);	
}

// -----------------------------------------

void insertOnSort()
{
	zerar();
	
	int opc4, i, j, eleito;
	int count = 0, count2 = 0;
	
	do
	{
		system("cls");
		
		printf("\033[0;36m");
		printf("\n <----<< Insertion Sort >>---->\n");
		printf("\033[0m");
		
		printf("\n             1 - a)");
		printf("\n             2 - b)");
		printf("\n             3 - c)");
		printf("\n             4 - d)");
		printf("\n             5 - e)");
		printf("\n             6 - f)");
		printf("\n             7 - g)");
		printf("\n\n             0 - Sair");
		printf("\n\n ESCOLHA: ");
		scanf("%d",&opc4);
		
		switch(opc4)
		{
			case 1:
				count = 0, count2 = 0;
				for (i = 1; i < 6; i++)
				{
					eleito = vetA[i];
					
					j = i - 1;
					
					while (j >= 0 && vetA[j] > eleito)
					{
						vetA[j+1] = vetA[j];
						j = j - 1;
						count2++;
					}
					vetA[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 2:
				count = 0, count2 = 0;
				for (i = 1; i < 6; i++)
				{
					eleito = vetB[i];
					
					j = i - 1;
					
					while (j >= 0 && vetB[j] > eleito)
					{
						vetB[j+1] = vetB[j];
						j = j - 1;
						count2++;
					}
					vetB[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 3:
				count = 0, count2 = 0;
				for (i = 1; i < 6; i++)
				{
					eleito = vetC[i];
					
					j = i - 1;
					
					while (j >= 0 && vetC[j] > eleito)
					{
						vetC[j+1] = vetC[j];
						j = j - 1;
						count2++;
					}
					vetC[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 4:
				count = 0, count2 = 0;
				for (i = 1; i < 12; i++)
				{
					eleito = vetD[i];
					
					j = i - 1;
					
					while (j >= 0 && vetD[j] > eleito)
					{
						vetD[j+1] = vetD[j];
						j = j - 1;
						count2++;
					}
					vetD[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 5:
				count = 0, count2 = 0;
				for (i = 1; i < 12; i++)
				{
					eleito = vetE[i];
					
					j = i - 1;
					
					while (j >= 0 && vetE[j] > eleito)
					{
						vetE[j+1] = vetE[j];
						j = j - 1;
						count2++;
					}
					vetE[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 6:
				count = 0, count2 = 0;
				for (i = 1; i < 10; i++)
				{
					eleito = vetF[i];
					
					j = i - 1;
					
					while (j >= 0 && vetF[j] > eleito)
					{
						vetF[j+1] = vetF[j];
						j = j - 1;
						count2++;
					}
					vetF[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 7:
				count = 0, count2 = 0;
				for (i = 1; i < 10; i++)
				{
					eleito = vetG[i];
					
					j = i - 1;
					
					while (j >= 0 && vetG[j] > eleito)
					{
						vetG[j+1] = vetG[j];
						j = j - 1;
						count2++;
					}
					vetG[j+1] = eleito;
					count++;
				}
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc4 != 0);
}

// -----------------------------------------

void selectionSort()
{
	zerar();
	
	int opc4, i, j, eleito, menor, pos;
	int count, count2;
	int nif, nif2;
	
	do
	{
		system("cls");
		
		printf("\033[0;36m");
		printf("\n <----<< Selection Sort >>---->\n");
		printf("\033[0m");
		
		printf("\n             1 - a)");
		printf("\n             2 - b)");
		printf("\n             3 - c)");
		printf("\n             4 - d)");
		printf("\n             5 - e)");
		printf("\n             6 - f)");
		printf("\n             7 - g)");
		printf("\n\n             0 - Sair");
		printf("\n\n  ESCOLHA: ");
		scanf("%d",&opc4);
		
		switch(opc4)
		{
			case 1:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 5; i++)
				{
					eleito = vetA[i];
					menor = vetA[i+1];
					pos = i+1;
					
					for(j = i+2; j < 6; j++)
					{
						if(vetA[j] < menor)
						{
							menor = vetA[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetA[i] = vetA[pos];
						vetA[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 2:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 5; i++)
				{
					eleito = vetB[i];
					menor = vetB[i+1];
					pos = i+1;
					
					for(j = i+2; j < 6; j++)
					{
						if(vetB[j] < menor)
						{
							menor = vetB[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetB[i] = vetB[pos];
						vetB[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 3:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 5; i++)
				{
					eleito = vetC[i];
					menor = vetC[i+1];
					pos = i+1;
					
					for(j = i+2; j < 6; j++)
					{
						if(vetC[j] < menor)
						{
							menor = vetC[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetC[i] = vetC[pos];
						vetC[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 4:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 11; i++)
				{
					eleito = vetD[i];
					menor = vetD[i+1];
					pos = i+1;
					
					for(j = i+2; j < 12; j++)
					{
						if(vetD[j] < menor)
						{
							menor = vetD[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetD[i] = vetD[pos];
						vetD[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 5:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 11; i++)
				{
					eleito = vetE[i];
					menor = vetE[i+1];
					pos = i+1;
					
					for(j = i+2; j < 12; j++)
					{
						if(vetE[j] < menor)
						{
							menor = vetE[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetE[i] = vetE[pos];
						vetE[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 6:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 9; i++)
				{
					eleito = vetF[i];
					menor = vetF[i+1];
					pos = i+1;
					
					for(j = i+2; j < 10; j++)
					{
						if(vetF[j] < menor)
						{
							menor = vetF[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetF[i] = vetF[pos];
						vetF[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 7:
				count = 0, count2 = 0;
				nif = 0, nif2 = 0;
				
				for(i = 0; i < 9; i++)
				{
					eleito = vetG[i];
					menor = vetG[i+1];
					pos = i+1;
					
					for(j = i+2; j < 10; j++)
					{
						if(vetG[j] < menor)
						{
							menor = vetG[j];
							pos = j;
							nif++;
						}
						count2++;
					}
					if(menor < eleito)
					{
						vetG[i] = vetG[pos];
						vetG[pos] = eleito;
						nif2++;
					}
					count++;
				}
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d",count, count2);
				printf("\n If 1: %d \n If 2: %d",nif, nif2);
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc4 != 0);
}

// -----------------------------------------
// -----------------------------------------
// -----------------------------------------

void intercala(int x[], int inicio, int fim, int meio);

// -----------------------------------------

void merge (int x[], int inicio, int fim)
{
	int meio;
	
	if(inicio < fim)
	{
		meio = (inicio+fim)/2;
		merge(x, inicio, meio);
		merge(x, meio+1, fim);
		
		intercala(x, inicio, fim, meio);
	}
}

// -----------------------------------------

void intercalacao()
{
	int opc5;
	
	do
	{
		system("cls");
		
		printf("\033[0;36m");
		printf("\n <----<< Insercalacao >>---->\n");
		printf("\033[0m");
		
		printf("\n           1 - a)");
		printf("\n           2 - b)");
		printf("\n           3 - c)");
		printf("\n           4 - d)");
		printf("\n           5 - e)");
		printf("\n           6 - f)");
		printf("\n           7 - g)");
		printf("\n\n           0 - Sair");
		printf("\n\n ESCOLHA: ");
		scanf("%d",&opc5);
		
		switch(opc5)
		{
			case 1:
				#define lenght 6
				
				merge(vetA, 0, 6);
				printf("\n Feito!");
			break;
			
			case 2:
				#define lenght 6
				
				merge(vetB, 0, 6);
				printf("\n Feito!");
			break;
			
			case 3:
				#define lenght 6
				
				merge(vetC, 0, 6);
				printf("\n Feito!");
			break;
			
			case 4:
				#define lenght 12
				
				merge(vetD, 0, 12);
				printf("\n Feito!");
			break;
			
			case 5:
				#define lenght 12
				
				merge(vetE, 0, 12);
				printf("\n Feito!");
			break;
			
			case 6:
				#define lenght 10
				
				merge(vetF, 0, 10);
				printf("\n Feito!");
			break;
			
			case 7:
				#define lenght 10
				
				merge(vetG, 0, 10);
				printf("\n Feito!");
			break;
			
			case 0:
				
			break;
			
			default:
				printf("\n Escolha invalida");
			break;
		}
		getch();
	}
	while(opc5 != 0);
}

// -----------------------------------------

void intercala(int x[], int inicio, int fim, int meio)
{
	int poslivre, inicio_vetor1, inicio_vetor2, i;
	int aux[lenght];
	
	inicio_vetor1 = inicio;
	inicio_vetor2 = meio+1;
	
	poslivre = inicio;
	
	while(inicio_vetor1 <= meio && inicio_vetor2 <= fim)
	{
		if(x[inicio_vetor1] <= x[inicio_vetor2])
		{
			aux[poslivre] = x[inicio_vetor1];
			inicio_vetor1 = inicio_vetor1 + 1;
		}
		else
		{
			aux[poslivre] = x[inicio_vetor2];
			inicio_vetor2 = inicio_vetor2 + 1;
		}
		poslivre++;
	}
	
	for(i = inicio_vetor1; i <= meio; i++)
	{
		aux[poslivre] = x[i];
		poslivre++;
	}
	
	for(i = inicio_vetor2; i <= fim; i++)
	{
		aux[poslivre] = x[i];
		poslivre++;
	}
	for(i = inicio; i <= fim; i++)
		x[i] = aux[i];
}

// -----------------------------------------
// -----------------------------------------
// -----------------------------------------

int particao (int *x, int p, int r);

int count = 0, count2 = 0;
int nif = 0;

// -----------------------------------------

void troca (int *x, int i, int j)
{
	int aux;
	aux = x[i];
	x[i] = x[j];
	x[j] = aux;
	
	count2++;
}

// -----------------------------------------

void quicksort(int *x, int p, int r)
{
	int q;
	
	if (p < r)
	{
		q = particao(x, p, r);
		quicksort(x, p, q);
		quicksort(x, q+1, r);
		nif++;
	}
}

// -----------------------------------------

int particao (int *x, int p, int r)
{
	int pivo, i, j;
	
	pivo = x[(p+r)/2];
	i = p - 1;
	j = r + 1;
	
	while(i < j)
	{
		do
		{
			j--;
		}
		while(x[j] > pivo);
		
		do
		{
			i++;
		}
		while(x[i] < pivo);
		
		if(i < j)
			troca(x, i, j);
			
		count++;
	}
	return j;
}
// -----------------------------------------

void quickSort ()
{
	zerar();
	
	int opc6, i, j, eleito, menor, pos;
	int count, count2;
	int nif, nif2;
	
	do
	{
		system("cls");
		
		int tam;
		
		printf("\033[0;36m");
		printf("\n <----<< Quick Sort >>---->\n");
		printf("\033[0m");
		
		printf("\n           1 - a)");
		printf("\n           2 - b)");
		printf("\n           3 - c)");
		printf("\n           4 - d)");
		printf("\n           5 - e)");
		printf("\n           6 - f)");
		printf("\n           7 - g)");
		printf("\n\n           0 - Sair");
		printf("\n\n  ESCOLHA: ");
		scanf("%d",&opc6);
		
		switch(opc6)
		{
			case 1:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetA)/sizeof(int);
				
				quicksort(vetA, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 2:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetB)/sizeof(int);
				
				quicksort(vetB, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 3:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetC)/sizeof(int);
				
				quicksort(vetC, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 4:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetD)/sizeof(int);
				
				quicksort(vetD, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 5:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetE)/sizeof(int);
				
				quicksort(vetE, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 6:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetF)/sizeof(int);
				
				quicksort(vetF, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 7:
				count = 0;
				count2 = 0;
				nif = 0;
				tam = sizeof(vetG)/sizeof(int);
				
				quicksort(vetG, 0, tam-1);
				
				printf("\n Feito!");
				printf("\n Contador 1: %d \n Contador 2: %d \n if: %d",count, count2, nif);
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc6 != 0);
}

// -----------------------------------------
// -----------------------------------------
// -----------------------------------------

void fila_prioriadadeA(int i, int qtde);
void trocaA (int i, int j);

void transforma_heapA(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeA(i,qtde);
	}
}

void heapsortA (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaA(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeA(1,ultima_pos);
	}
}

void trocaA (int i, int j)
{
		
	int aux;
				
	aux = vetA[i];
	vetA[i] = vetA[j];
	vetA[j] = aux;
}				

				
void fila_prioriadadeA(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetA[f_esq] >= vetA[f_dir] && vetA[f_esq] > vetA[i])
		{
		maior = 2*i+1;
		}
		else if(vetA[f_dir] > vetA[f_esq] && vetA[f_dir] > vetA[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetA[f_dir] > vetA[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaA(i, maior);
		fila_prioriadadeA(maior, qtde);
	}
}

// -----------------------------------------

void fila_prioriadadeB(int i, int qtde);
void trocaB (int i, int j);

void transforma_heapB(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeB(i,qtde);
	}
}

void heapsortB (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaB(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeB(1,ultima_pos);
	}
}

void trocaB (int i, int j)
{	
	int aux;
				
	aux = vetB[i];
	vetB[i] = vetB[j];
	vetB[j] = aux;
}				

				
void fila_prioriadadeB(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetB[f_esq] >= vetB[f_dir] && vetB[f_esq] > vetB[i])
		{
			maior = 2*i+1;
		}
		else if(vetB[f_dir] > vetB[f_esq] && vetB[f_dir] > vetB[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetB[f_dir] > vetB[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaB(i, maior);
		fila_prioriadadeB(maior, qtde);
	}
}

// -----------------------------------------

void fila_prioriadadeC(int i, int qtde);
void trocaC (int i, int j);

void transforma_heapC(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeC(i,qtde);
	}
}

void heapsortC (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaC(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeC(1,ultima_pos);
	}
}

void trocaC (int i, int j)
{	
	int aux;
				
	aux = vetC[i];
	vetC[i] = vetC[j];
	vetC[j] = aux;
}				

				
void fila_prioriadadeC(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetC[f_esq] >= vetC[f_dir] && vetC[f_esq] > vetC[i])
		{
			maior = 2*i+1;
		}
		else if(vetC[f_dir] > vetC[f_esq] && vetC[f_dir] > vetC[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetC[f_dir] > vetC[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaC(i, maior);
		fila_prioriadadeC(maior, qtde);
	}
}

// -----------------------------------------


void fila_prioriadadeD(int i, int qtde);
void trocaD (int i, int j);

void transforma_heapD(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeD(i,qtde);
	}
}

void heapsortD (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaD(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeD(1,ultima_pos);
	}
}

void trocaD (int i, int j)
{	
	int aux;
				
	aux = vetD[i];
	vetD[i] = vetD[j];
	vetD[j] = aux;
}				

				
void fila_prioriadadeD(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetD[f_esq] >= vetD[f_dir] && vetD[f_esq] > vetD[i])
		{
			maior = 2*i+1;
		}
		else if(vetD[f_dir] > vetD[f_esq] && vetD[f_dir] > vetD[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetD[f_dir] > vetD[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaD(i, maior);
		fila_prioriadadeD(maior, qtde);
	}
}

// -----------------------------------------

void fila_prioriadadeE(int i, int qtde);
void trocaE (int i, int j);

void transforma_heapE(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeE(i,qtde);
	}
}

void heapsortE (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaE(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeE(1,ultima_pos);
	}
}

void trocaE (int i, int j)
{	
	int aux;
				
	aux = vetE[i];
	vetE[i] = vetE[j];
	vetE[j] = aux;
}				

				
void fila_prioriadadeE(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetE[f_esq] >= vetE[f_dir] && vetE[f_esq] > vetE[i])
		{
			maior = 2*i+1;
		}
		else if(vetE[f_dir] > vetE[f_esq] && vetE[f_dir] > vetE[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetE[f_dir] > vetE[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaE(i, maior);
		fila_prioriadadeE(maior, qtde);
	}
}

// -----------------------------------------

void fila_prioriadadeF(int i, int qtde);
void trocaF (int i, int j);

void transforma_heapF(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeF(i,qtde);
	}
}

void heapsortF (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaF(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeF(1,ultima_pos);
	}
}

void trocaF (int i, int j)
{	
	int aux;
				
	aux = vetF[i];
	vetF[i] = vetF[j];
	vetF[j] = aux;
}				

				
void fila_prioriadadeF(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetF[f_esq] >= vetF[f_dir] && vetF[f_esq] > vetF[i])
		{
			maior = 2*i+1;
		}
		else if(vetF[f_dir] > vetF[f_esq] && vetF[f_dir] > vetF[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetF[f_dir] > vetF[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaF(i, maior);
		fila_prioriadadeF(maior, qtde);
	}
}

// -----------------------------------------

void fila_prioriadadeG(int i, int qtde);
void trocaG (int i, int j);

void transforma_heapG(int qtde)
{
	int i;
	
	for(i = qtde/2; i >= 1; i--)
	{
		fila_prioriadadeG(i,qtde);
	}
}

void heapsortG (int qtde)
{
	int i, ultima_pos, aux;
	
	for (i = qtde; i>= 2; i--)
	{
		trocaG(1,i);
		ultima_pos = i - 1;
		fila_prioriadadeG(1,ultima_pos);
	}
}

void trocaG (int i, int j)
{	
	int aux;
				
	aux = vetG[i];
	vetG[i] = vetG[j];
	vetG[j] = aux;
}				

				
void fila_prioriadadeG(int i, int qtde)
{
	int f_esq, f_dir, maior, aux;
					
	maior = i;
					
	if (2*i+1 <= qtde)
	{
		f_esq = 2*i+1;
		f_dir = 2*i;
						
		if (vetG[f_esq] >= vetG[f_dir] && vetG[f_esq] > vetG[i])
		{
			maior = 2*i+1;
		}
		else if(vetG[f_dir] > vetG[f_esq] && vetG[f_dir] > vetG[i])
		{
			maior = 2*i;
		}
	}
	else if (2*i <= qtde)
	{
		f_dir = 2*i;
		
		if(vetG[f_dir] > vetG[i])
		{
			maior = 2*i;
		}
	}
	if(maior != i)
	{
		trocaG(i, maior);
		fila_prioriadadeG(maior, qtde);
	}
}

// -----------------------------------------

void filaPrioriade()
{
	zerar();
	
	int opc6, qtde;
	
	do
	{
		system("cls");
		
		int tam;
		
		printf("\033[0;36m");
		printf("\n <----<< Fila de Prioridade >>---->\n");
		printf("\033[0m");
		
		printf("\n             1 - a)");
		printf("\n             2 - b)");
		printf("\n             3 - c)");
		printf("\n             4 - d)");
		printf("\n             5 - e)");
		printf("\n             6 - f)");
		printf("\n             7 - g)");
		printf("\n\n             0 - Sair");
		printf("\n\n  ESCOLHA: ");
		scanf("%d",&opc6);
		
		switch(opc6)
		{
			case 1:
				qtde = 6;
				
				transforma_heapA(qtde);
				heapsortA(qtde);
				
				printf("\n Feito!");
			break;
			
			case 2:
				qtde = 6;
				
				transforma_heapB(qtde);
				heapsortB(qtde);
				
				printf("\n Feito!");
			break;
			
			case 3:
				qtde = 6;
				
				transforma_heapC(qtde);
				heapsortC(qtde);
				
				printf("\n Feito!");
			break;
			
			case 4:
				qtde = 12;
				
				transforma_heapD(qtde);
				heapsortD(qtde);
				
				printf("\n Feito!");
			break;
			
			case 5:
				qtde = 12;
				
				transforma_heapE(qtde);
				heapsortE(qtde);
				
				printf("\n Feito!");
			break;
			
			case 6:
				qtde = 10;
				
				transforma_heapF(qtde);
				heapsortF(qtde);
				
				printf("\n Feito!");
			break;
			
			case 7:
				qtde = 10;
				
				transforma_heapG(qtde);
				heapsortG(qtde);
				
				printf("\n Feito!");
			break;
			
			case 0: break;
			
			default:
				printf("\n Escolha invalida");
			break;
					
		}
		
		getch();
	}
	while(opc6 != 0);
}

// -----------------------------------------
// -----------------------------------------
// -----------------------------------------

int main(){
	int opc;

	do
	{
		system("cls");
		
		printf("\033[0;32m");
		printf("\n <----<< ! Toda vez que seleciona um organizador os vetores reiniciam ! >>---->\n");
		printf("\033[0m");
		
		printf("\n                1 - Apresentar");
		printf("\n                2 - Bouble Sort");
		printf("\n                3 - Insertion Sort");
		printf("\n                4 - Selection Sort");
		printf("\n                5 - Ordenacao por intercalacao");
		printf("\n                6 - Quick Sort");
		printf("\n                7 - Fila de Prioridade");
		printf("\n\n               -1 - Resetar");
		printf("\n                0 - Sair \n");
		printf("\n ESCOLHA: "); 
		scanf("%d",&opc);
		
		switch(opc)
		{
			case 1:
				apresentar();
			break;
			
			case 2:
				boubleSort();
			break;
			
			case 3:
				insertOnSort();
			break;
			
			case 4:
				selectionSort();
			break;
			
			case 5:
				intercalacao();
			break;
			
			case 6:
				quickSort();
			break;
			
			case 7:
				filaPrioriade();
			break;
			
			case -1:
				zerar();
			break;
			
			case 0:
				
			break;
			
			default:
				printf("\n Escolha invalida");
			break;
		}
	}
	while(opc!=0);
}
