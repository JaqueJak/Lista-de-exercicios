#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	char mercad[5][20], caro2[20], barato2[20];
	float preco[5], caro = 0, barato = 999999, media = 0;
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite a mercadoria: ");
		scanf("%s", &mercad[i]);
		
		printf("digite o preço da mercadoria: ");
		scanf("%f", &preco[i]);
		
		if(preco[i] > caro){
			caro = preco[i];
			strcpy(caro2, mercad[i]);
		}
		if(preco[i] < barato){
			barato = preco[i];
			strcpy(barato2, mercad[i]);
		}
	}
	printf("O produto mais caro é: %s %.2f\n", caro2, caro);
	printf("O produto mais barato é: %s %.2f\n", barato2, barato);
	
	return 0;
}
