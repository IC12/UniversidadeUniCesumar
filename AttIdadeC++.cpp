//Programa para calcular quantos anos serão necessários para que a altura de Brenda (11 anos e mede 1,40 metros) ultrapasse a altura de Carla (14 anos e mede 1,45 metros);
//Brenda cresce em média 2,1 centímetros ao ano e Carla cresce em média 1,1 centímetros ao ano.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float brenda, carla;
	int B, C;
	brenda = 140;
	B = 11;
	carla = 145;
	C = 14;
	while(brenda <= carla){
		brenda = brenda + 2.1;
		carla = carla + 1.1;
		B++;
		C++;
		printf("** %d Anos Depois **\n\nBrenda \n\tidade: %d\n\taltura: %.2f\n\nCarla \n\tidade: %d\n\taltura: %.2f\n\n", B-11, B, brenda, C, carla);
	}
	printf("A altura de Brenda irá ultrapassar a de Carla após %d anos.\n", B-11);
}
