#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define tamanho 5

typedef struct info_aluno {
	int ra;
	char arq[100];
	char ext[4];
	int matr;
}info_aluno;

typedef struct tipo_fila {
    info_aluno dados [tamanho];
    int ini;
	int fim;
}tipo_fila;

tipo_fila fila_alunos;

void iniciaFila(tipo_fila *f) {
    int i;
    
    f->ini = 0;
    f->fim = 0;
    
    for(i = 0; i < tamanho; i++) {
        f-> dados[i].ra = -1;
        strcpy(f-> dados[i].arq, "");
        strcpy(f-> dados[i].ext, "");
        f-> dados[i].matr = -1;
    }
}

void enfileira(info_aluno elemento, tipo_fila *f) {
    if(f-> fim == tamanho) {
        printf("Fila cheia.\n");
        system("pause");
    } else {
        f-> dados[f->fim] = elemento;
        f-> fim++;
    }
}

info_aluno desenfileira(tipo_fila *f) {
    info_aluno elemento;
    int i;
    
    if(f-> fim == f-> ini) {
        printf("Fila vazia. \n");
        system("pause");
    } else {
        elemento = f-> dados[f-> ini];
        for(i = 0; i < tamanho; i++) {
            f-> dados[i] = f-> dados[i+1];
            f-> fim--;
        }
    }
    return elemento;
}

void imprimeFila(tipo_fila *f) {
    int i;
    printf("\n\nLista de alunos:\n\n");
    for(i = 0; i < f-> fim; i++) {
        printf("%d\n", f-> dados[i].ra);
        printf("%s\n", f-> dados[i].arq);
        printf("%s\n", f-> dados[i].ext);
        printf("%d\n\n", f-> dados[i].matr);
    }
}

void menu() {
    imprimeFila(&fila_alunos);
    
    printf("\n\nOpções:\n");
    printf("1 - Inserir um aluno na fila;\n");
    printf("2 - Remover um aluno da fila;\n");
	printf("3 - Esvaziar a fila;\n");                          
	printf("0 - Encerrar o programa.\n\n");        
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int op;
    info_aluno aluno;
    
    iniciaFila(&fila_alunos);
    
    do {
        menu();
        scanf("%d", &op);
        fflush(stdin);
        
        switch(op) {
            case 1:
                if(fila_alunos.fim == tamanho) {
                    printf("Fila cheia.\n");
                    system("pause");
                } else {
                    printf("Informe o RA do aluno:\n");
                    scanf("%d", &aluno.ra);
                    fflush(stdin);
                    printf("\nNome do arquivo: ");
                    scanf("%99[^\n]s", aluno.arq);
                    fflush(stdin);
                    printf("\nExtensão do arquivo: ");
                    scanf("%3[^\n]s", aluno.ext);
                    fflush(stdin);
                    printf("\nMatrícula do professor: ");
                    scanf("%d", &aluno.matr);
                    fflush(stdin);
                    enfileira(aluno, &fila_alunos);
                }
                break;
            case 2:
                if(fila_alunos.fim != 0) {
                    aluno = desenfileira(&fila_alunos);
                    printf("Desenfileirando: %d - %s - %s - %d.\n", aluno.ra, aluno.arq, aluno.ext, aluno.matr);
                } else
                    printf("Fila vazia.\n");
                system("pause");
                break;
            case 3:
                iniciaFila(&fila_alunos);
                printf("A fila foi esvaziada!\n");
                system("pause");
                break;
            default:
                if(op)
                    printf("Opção inválida!\n");
                break;
        }
    } while(op != 0);
}