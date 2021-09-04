#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tamanho 5
int cod;

typedef struct tipo_ccts{
    int codliv;
    char nome[100];
    char autor[100];
    int preco;
}tipo_ccts;

typedef struct tipo_fila{
    tipo_ccts dados[tamanho];
    int ini;
    int fim;
}tipo_fila;

tipo_fila fila1;

void inicializaFila(tipo_fila *f){
    int i;
    
    f->ini = 0;
    f->fim = 0;
    
    for(i=0; i<tamanho; i++){        
		f->dados[i].codliv = -1;
        strcpy(f->dados[i].nome, "");
        strcpy(f->dados[i].autor, "");
        f->dados[i].preco = -1;
    }

}

void enfileira(tipo_ccts elemento, tipo_fila *f){
    
    if(f->fim == tamanho){
        printf("Fila cheia.\n");
        system("pause");
    }
    else
    {
        f->dados[f->fim] = elemento;
        f->fim++;
    }
}

tipo_ccts desenfileira(tipo_fila *f){
    tipo_ccts elemento; 
    int i;
    
    if(f->fim == f->ini){
        printf("Fila vazia.\n");
        system("pause");
    }
    else
    {
        elemento = f->dados[f->ini];
        for(i=0; i < tamanho; i++){           
		f->dados[i] = f->dados[i+1];
        f->fim--;
        return elemento;
    	}
	}
}

void imprimeFila(tipo_fila *f){
    int i;
    printf("\n\nImprimindo:\n\n");
    for(i=0; i<f->fim; i++){
        printf("%d\n", f->dados[i].codliv);
        printf("%s\n", f->dados[i].nome);
        printf("%s\n", f->dados[i].autor);
        printf("%d$\n\n", f->dados[i].preco);
    }
}


void menu_mostrar(){
	
    system("cls");
    imprimeFila(&fila1);
    
    printf("\n\nOpções:\n");
    printf("1 - Para inserir um livro;\n");
    printf("2 - Para remover um livro;\n");
    printf("3 - Para esvaziar a fila;\n");
    printf("0 - Encerrar o programa;\n");
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");
    
    int op;
    tipo_ccts elem;
    
    inicializaFila(&fila1);
    
    do{
        menu_mostrar();
        scanf("%d", &op);
        fflush(stdin);
        
        switch(op){
            case 1:
                if(fila1.fim == tamanho){
                    printf("Fila cheia.\n");
                    system("pause");
                } else {
                    printf("Informe o Código do livro:\n");
                    scanf("%d", &elem.codliv);
                    fflush(stdin);
                    printf("Informe o nome do livro:\n");
                    scanf("%99[^\n]s", elem.nome);
                    fflush(stdin);
                    printf("Informe o(a) autor(a) do livro:\n");
                    scanf("%99[^\n]s", elem.autor);
                    fflush(stdin);
                    printf("Informe o preço do livro:\n");
                    scanf("%d$", &elem.preco);
                    fflush(stdin);
                    enfileira(elem, &fila1);
                }
                break;
            
            case 2:
                if(fila1.fim != 0){
                    elem = desenfileira(&fila1);
                    printf("Desenfileirando: %d - %s - %s - %d$.\n", elem.codliv, elem.nome, elem.autor, elem.preco);
                } else {
                    printf("Fila vazia.\n");
                }
                system("pause");
                break;
            
            case 3:
                inicializaFila(&fila1);
                printf("A fila foi esvaziada!\n");
                system("pause");
                break;
                
            default:
                if(op){
                    printf("Opção inválida.\n");
                    system("pause");
                }
                break;
        }
    }while(op != 0);
    
}
