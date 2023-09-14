#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char produto[10][15];
	float custo[10], percent, final[10];
	int i;
	
	for(i = 0; i < 1; i++){
		printf("Digite o produto %d: ", i+1);
		scanf("%s", &produto[i]);
		
		printf("digite o preço de %s: ", produto[i]);
		scanf("%f", &custo[i]);
	}
	
	printf("Digite o percentual(%%) de desconto: ");
	scanf("%f", &percent);
	
	for(i = 0; i < 1; i++){
		final[i] = custo[i] - (custo[i] * percent) / 100;
		printf("%s R$%.0f - %.0f%% = R$%.0f", produto[i], custo[i], percent, final[i]);
	}
	
	return 0;
}
