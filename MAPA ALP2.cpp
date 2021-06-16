#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct clientes{
	int codigo;
	char nome[30], telefone[15], email[50];
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int insira, contador=0,i;
	struct clientes pessoa[5];
	
	do{
		printf("------AGENDA - VERSÃO BETA ------\n");
		printf("1 - Digite 1 para inserir novo cadastro;\n");
		printf("2 - Digite 2 para mostrar clientes cadastrados;\n");
		printf("0 - Digite 0 para encerrar.\n");
		scanf("%d",&insira);
		fflush(stdin);
		system("cls");
		
		switch(insira){
			case 1:
			if(contador <=4){
				printf("CADASTRO DE CLIENTES\n\n");
				printf("Código: %d\n", contador);
				printf("informe o nome:\n");
				fgets(pessoa[contador].nome,30, stdin);
				fflush(stdin);
				
				printf("informe o telefone:\n");
				fgets(pessoa[contador].telefone,15, stdin);
				fflush(stdin);
				
				printf("informe o e-mail:\n");
				fgets(pessoa[contador].email,50, stdin);
				fflush(stdin);
				
				printf("\n");
				
				contador++;
			}else{
				printf("Agenda lotada!\n\n");
			}
			break;
			
			case 2:
				if(contador==0){
					printf("Agenda Vazia!\n\n");
				}else{
					printf("LISTA DE CLIENTES\n\n");
					
					for(i=1; i<contador; i++){
					printf("Código: %d\n",i);
					printf("Nome: %s", pessoa[i].nome);
					printf("Telefone: %s", pessoa[i].telefone);
					printf("E-mail: %s\n", pessoa[i].email);
					}
				}
			break;
		
			case 0:
				printf("Encerrado!\n");
			break;	
			
			default:
				printf("Erro: opção inválida!\n\n");
		}		
	}while(insira !=0);
	
	return(0);
}

