#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char cidade[5][30];
	float eleitores[5], votos[5], total[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o nome da cidade %d: ", i + 1);
		scanf("%s", &cidade[i]);
		
		printf("Digite quantos eleitores a cidade tem: ", cidade[i]);
		scanf("%f", &eleitores[i]);
		
		printf("Digite quantos votos a cidade teve: ", cidade[i]);
		scanf("%f", &votos[i]);
		
		total[i] = (votos[i] / eleitores[i]) * 100;
	}
	
	for(i = 0; i < 5; i++){
		printf("%s\n %.1f%%", cidade[i], total[i]);
	}
	
	return 0;
}
