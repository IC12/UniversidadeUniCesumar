// Ol� professores, fiz esse MAPA com toda dedica��o e sem colas. Apenas olhei exemplos e tirei algumas d�vidas para tentar realizar meu c�digo de acordo com o proposto.
// Fiquei quebrando cabe�a h� algum tempo mas infelizmente n�o consegui realiza-lo da maneira proposta ;-( Aguardo feedback.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tamanho 5

struct fila{
	int dados [tamanho];
	int ra;
	char arq[100];
	char ext[4];
	int matr;
	int ini;
	int fim;
};

struct fila fila;
int op;

void enfileira(); 
void desenfileira(); 
void fila_mostrar();
void menu();

void enfileira (){
	
	int ra;
	char arq[100];
	char ext[4];
	int matr;
	
	if (fila.fim == tamanho){
		printf("Fila cheia!\n");
		system ("pause");
	}
	else
	{
		printf("\nRA do aluno: ");
		scanf("%d", &ra);
		fflush(stdin);
		printf("\nNome do arquivo: ");
		scanf("%s", &arq);
		fflush(stdin);
		printf("\nExtens�o do arquivo: ");
		scanf("%s", &ext);
		fflush(stdin);
		printf("\nMatr�cula do professor: ");
		scanf("%d", &matr);
		fflush(stdin);
		fila.fim++;
	}
}
void desenfileira() {
	
	int ra;
	char arq[100];
	char ext[4];
	int matr;
	
	if (fila.ini == fila.fim) {
		printf("\nFila vazia!\n\n");
		system("pause");
	}
	else {
		int i;
		for (i = 0; i < tamanho; i++) {
			fila.dados[i]=fila.dados[i+1];
		fila.dados[fila.fim]=0;
		printf("RA do aluno: %d\n", &ra);
		printf("Nome do arquivo: %s\n", &arq);
		printf("Extens�o do arquivo: %s\n", &ext);
		printf("Matr�cula do professor: %d\n\n", &matr);
		
		fila.fim--;
		}
	}
}
void esvaziar(){
	fila.ini = 0;
	fila.fim = 0;
	
	void fila_mostrar();
}
void fila_mostrar(){
	
	int ra;
	char arq[100];
	char ext[4];
	int matr;
	int i;
	for (i = 0; i < tamanho; i++) {
		printf("RA do aluno: %d\n", &ra);
		printf("Nome do arquivo: %s\n", &arq);
		printf("Extens�o do arquivo: %s\n", &ext);
		printf("Matr�cula do professor: %d\n\n", &matr);
		
	}
}
void menu() {  
	printf("1 - Inserir um elemento na fila;\n");          
	printf("2 - Remover um elemento da fila;\n");
	printf("3 - Esvaziar a fila;\n");                          
	printf("0 - Encerrar o programa.\n\n");        
	}
	
int main(){
	
setlocale(LC_ALL, "Portuguese");

	op = 0;
	fila.fim = 0;
	fila.ini = 0;
	   
	system("cls");
	fila_mostrar();       
	menu(); 
	
	do{
	scanf("%d", &op);
	fflush(stdin);
		switch (op) {      
		case 1:        
		enfileira ();      
		break;
		case 2:        
		desenfileira();      
		break;
		case 3:
		esvaziar();
		break;
		case 0:
		printf("Encerrado!\n");
			break;
		
		default:
			printf("Erro: op��o inv�lida!\n\n");  
		}        
	}while(op != 0);  
	 
	return 0; 
}

// Tentei fazer de v�rias formas, mas de acordo com a proposta eu n�o conseguir. Segue abaixo o outro c�digo que eu criei.

//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <string.h>

//#define tamanho 5

//struct fila{
//	int dados [tamanho];
//	int ra;
//	char arq[100];
//	char ext[4];
//	int matr;
//	int ini;
//	int fim;
//};

//fila fila;
//int op;

//void enfileira(); 
//void desenfileira(); 
//void fila_mostrar();
//void menu();

//void enfileira (){
	
//	if (fila.fim == tamanho){
//		printf("Fila cheia!\n");
//		system ("pause");
//	}
//	else
//	{
//		printf("\nRA do aluno: ");
//		scanf("%d", fila.ra);
//		fflush(stdin);
//		printf("\nNome do arquivo: ");
//		scanf("%s", fila.arq);
//		fflush(stdin);
//		printf("\nExtens�o do arquivo: ");
//		scanf("%s", fila.ext);
//		fflush(stdin);
//		printf("\nMatr�cula do professor: ");
//		scanf("%d", fila.matr);
//		fflush(stdin);
//		fila.fim++;
//	}
//}
//void desenfileira() {
//	
//	if (fila.ini == fila.fim) {
//		printf("\nFila vazia!\n\n");
//		system("pause");
//	}
//	else {
//		int i;
//		for (i = 0; i < tamanho; i++) {
//			fila.dados[i]=fila.dados[i+1];
//		fila.dados[fila.fim]=0;
//		printf("RA do aluno: %d\n", fila.ra);
//		printf("Nome do arquivo: %s\n", fila.arq);
//		printf("Extens�o do arquivo: %s\n", fila.ext);
//		printf("Matr�cula do professor: %d\n\n", fila.matr);
		
//		fila.fim--;
//		}
//	}
//}
//void esvaziar(){
//	fila.ini = 0;
//	fila.fim = 0;
	
//	void fila_mostrar();
//}
//void fila_mostrar(){
	
//	int i;
//	for (i = 0; i < tamanho; i++) {
//		printf("RA do aluno: %d\n", fila.ra);
//		printf("Nome do arquivo: %s\n", fila.arq);
//		printf("Extens�o do arquivo: %s\n", fila.ext);
//		printf("Matr�cula do professor: %d\n\n", fila.matr);
		
//	}
//}
//void menu() {  
//	printf("1 - Inserir um elemento na fila;\n");          
//	printf("2 - Remover um elemento da fila;\n");
//	printf("3 - Esvaziar a fila;\n");                          
//	printf("0 - Encerrar o programa.\n\n");        
//	}
	
//int main(){
	
//setlocale(LC_ALL, "Portuguese");

//	op = 0;
//	fila.fim = 0;
//	fila.ini = 0;
	   
//	system("cls");
//	fila_mostrar();       
//	menu(); 
	
//	do{
//	scanf("%d", &op);
//	fflush(stdin);
//		switch (op) {      
//		case 1:        
//		enfileira ();      
//		break;
//		case 2:        
//		desenfileira();      
//		break;
//		case 3:
//		esvaziar();
//		break;
//		case 0:
//		printf("Encerrado!\n");
//			break;
		
//		default:
//			printf("Erro: op��o inv�lida!\n\n");  
//		}        
//	}while(op != 0);  
	 
//	return 0; 
//}




