//Programa para calcular quantos anos ser�o necess�rios para que a altura de Brenda (11 anos e mede 1,40 metros) ultrapasse a altura de Carla (14 anos e mede 1,45 metros);
//Brenda cresce em m�dia 2,1 cent�metros ao ano e Carla cresce em m�dia 1,1 cent�metros ao ano.

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
	printf("A altura de Brenda ir� ultrapassar a de Carla ap�s %d anos.\n", B-11);
}
