#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void tabelamega(void){
	
	int cartela[6][10] ={{1,  2,  3,  4,  5,  6,  7,  8,  9, 10},
						{11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
						{21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
						{31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
						{41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
						{51, 52, 53, 54, 55, 56, 57, 58, 59, 60}};
						
	for (int m = 0; m < 6; ++m){
		for( int n = 0; n < 10; ++n){
			printf(" %i ", cartela[m][n]);
			
		}
		printf("\n");
	}
}

void tabelaloto(void){
	
		int cartela[5][5] = {{ 1,  2,  3,  4,  5},
						 { 6,  7,  8,  9, 10},
					 	 {11, 12, 13, 14, 15},
						 {16, 17, 18, 19, 20},
						 {21, 22, 23, 24, 25}};
						
	for (int m = 0; m < 5; ++m){
		for( int n = 0; n < 5; ++n){
			printf(" %i ", cartela[m][n]);
			
		}
		printf("\n");
	}	
}

void megasena(void){
	
	int dez[15] = {0};
	int d, i, j;
						

	printf("\nQuantas dezenas deseja apostar? ");
	scanf("%i", &d);
	if(d < 6 || d > 15){
		system("cls");
		printf("Escolha valores entre 6 e 15!\n");
		printf("\nPressione uma tecla para tentar novamente...\n");
		getch();
		return megasena();
	
	}else{
		printf("Escolha os numeros: \n");
			for(i = 1; i <= d; ++i){
						printf("Dezena %i: ",i);
						scanf("%i", &dez[i]);
					
						system("cls");
							if(dez[i] < 1 || dez[i] > 60){
						system("cls");
						printf("\nEscolha valores entre 1 e 60!\n");
						printf("\nPressione uma tecla para tentar novamente...\n");
						getch();
						return megasena();
					}
				}
						printf(":::::JOGO::MEGA::SENA::::");
								printf("\n\nOs numeros escolhidos foram:\n\n ");
								for(int i = 1; i <= d; ++i){
								printf("%i - ", dez[i]);
								
								}
				}
		printf("\n\nBoa Sorte!!!");	
}

void lotofacil(void){
	
	int dez[20] = {0};
	int d, i, j;
						

	printf("\nQuantas dezenas deseja apostar? "); //Escolha da quantidade de dezenas
	scanf("%i", &d);
	if(d < 15 || d > 20){
		system("cls");
		printf("Escolha valores entre 15 e 20!\n");
		printf("\nPressione uma tecla para tentar novamente...\n");
		getch();
		system("cls");
		return lotofacil();
	
	}else{
		printf("Escolha os numeros: \n"); //Escolha dos números
			for(i = 1; i <= d; ++i){
						printf("Dezena %i: ",i);
						scanf("%i", &dez[i]);
					
						system("cls");
						if(dez[i] < 1 || dez[i] > 25){
						system("cls");
						printf("\nEscolha valores entre 1 e 25!\n");
						printf("\nPressione uma tecla para tentar novamente...\n");
						
						getch();
						return lotofacil();
					}
		}
						printf(":::::JOGO::LOTOFACIL::::");
						printf("\n\nOs numeros escolhidos foram:\n\n ");
						for(int i = 1; i <= d; ++i){
						printf("%i - ", dez[i]);
								
						}
	}
	printf("\n\nBoa Sorte!!!");
}

int main(void){
	
	int op;
	
	printf("Escolha em qual jogo apostar:\n\n ");
	printf("\t1. Mega-Sena\n");
	printf("\t2. Lotofacil\n");
	printf("\t3. Sair\n");
	scanf("%i", &op);
	system("cls");

	switch(op){
	
		case 1:
				 tabelamega();
				 megasena();
		break;
	
	
		case 2:
				tabelaloto();
				lotofacil();
		break;
		
		default: 3;
		printf ("Obrigado!!!");
	}
		

return 0;

}
