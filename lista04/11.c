#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int geraVetor(int valorP, int rodou){
	int vetor[10], posicao = -1, i;
	char continuar[3] = "sim";
	
	printf("Deseja fazer uma nova busca pelo némero %d? (Sim ou Não): ", valorP);
	scanf("%s", &continuar);
	
	if(strcmp(continuar,"não") == 1){
		system("cls");
		rodou = rodou + 1;
	    printf("O programa rodou %d\n", rodou);
		printf("Gerando um novo vetor para a procura");
		for(i = 0; i < 10; i++) {
	        vetor[i] = rand() % 101;
	    }
	    
	    printf("Vetor gerado para verificação: \n");
	    printf("Casa:\tNúmero:\n");
	    for(i = 0; i < 10; i++){
	    	printf("%d\t%d\n", i + 1, vetor[i]);
		}
	    
	    for(i = 0; i < 10; i++) {
	        if (vetor[i] == valorP) {
	            posicao = i + 1;
	            break;
	        }
	    }
	    
	    if(posicao != -1) {
	        printf("\033[1;32mO valor %d esta na posição %d do vetor.\n\033[0m\n", valorP, posicao);
	    }else{
	        printf("\033[1;31mO valor %d não foi encontrado no vetor.\033[0m\n", valorP);
	        geraVetor(valorP, rodou);
	    }
	}else{
		return 0;
	}
	
}

int main(){
    srand(time(NULL));
	setlocale(LC_ALL,"");
	int vetor[10], valorP, posicao = -1, i;
	
    
    printf("Gerando um novo vetor");
	for(i = 0; i < 10; i++) {
        vetor[i] = rand() % 101;
    }
    
    printf("Vetor gerado para verificação: \n");
    printf("Vetor:\tNúmero:\n");
    for(i = 0; i < 10; i++){
    	printf("%d\t%d\n", i + 1, vetor[i]);
	}
    
    printf("Digite um valor para ser localizado: ");
    scanf("%d", &valorP);
    
    for(i = 0; i < 10; i++) {
        if (vetor[i] == valorP) {
            posicao = i + 1;
            break;
        }
    }

    if(posicao != -1) {
        printf("O valor %d esta na posição %d do vetor.\n", valorP, posicao);
    }else{
        printf("O valor %d não foi encontrado no vetor.\n", valorP);
        geraVetor(valorP, 0);
    }

    return 0;
}
