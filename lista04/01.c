#include <stdio.h>
#include <locale.h>

int main(s){
	setlocale(LC_ALL,"");
	char nome[20][20];
	int x, i;
	float salario[20], indice, reajuste[20];
	
	printf("Quantos salários serão calculados: ");
	scanf("%d", &x);
	
	for(i = 1; i <= x; i++){
		printf("Nome da pessoa %d: ", i);
		scanf("%s", &nome[i]);
		nome[i] + i;
		
		printf("Insira o salário de %s: ", nome[i]);
		scanf("%f", &salario[i]);
		salario[i] + i;
	}
	
	printf("Insira o indice percentual(%%): ");
	scanf("%f", &indice);
	
	for(i = 1; i <= x; i++){
		reajuste[i] = (salario[i]*(indice+100))/100;
		reajuste[i] + i;
		
		printf("\n%s R$%.0f", nome[i], reajuste[i]);
	}
	
	return 0;
}
