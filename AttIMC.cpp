// IMC = PESO / ALTURA�;
// Menor que 21,0 -	Abaixo do peso;
// Entre 21,0 e 30,75 - Peso padr�o;
// Superior a 30,75	- Acima do peso;

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float peso;
	float altura;
	float IMC;
	char op;
	do{
		printf("Escreva o peso:\n");
		scanf("%f", &peso);
		fflush(stdin);
		printf("Escreva a altura:\n");
		scanf("%f", &altura);
		fflush(stdin);
		IMC = peso/(altura*altura);
		printf("IMC: %.2f\n", IMC);
		if(IMC < 21.0){
			printf("Abaixo do peso!\n");
		} else{
			if(IMC > 30.75){
				printf("Acima do peso!\n");
			} else{
				printf("Peso padr�o.\n");
			}
		}
		printf("Deseja calcular novamente? (y/n)\n");
		scanf("%c", &op);
		fflush(stdin);
		system("cls");
	}while(op == 'y' || op == 'Y');
}


