#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	char mercad[5][25];
	float preco[5], precoN[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite a mercadoria que deseja: ");
		scanf("%s", &mercad[i]);
		
		printf("Digite o preço da mercadoria: ");
		scanf("%f", &preco[i]);
		
		if(preco[i] < 1000){
			preco[i] = preco[i] * 1.05;
		}else{
			preco[i] = preco[i] * 1.07;
		}
	}
	for(i = 0; i < 5; i++){
		printf("%s %.2f\n", mercad[i], preco[i]);
	}
	
	return 0;
}
