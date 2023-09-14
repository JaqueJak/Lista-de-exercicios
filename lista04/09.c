#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
    int vetor[10], i;
    int somaP = 0, somaI = 0, totalP = 0, totalI = 0;
    
    for(i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0) {
        	totalP++;
            somaP += vetor[i];
        }else{
        	totalI++;
            somaI += vetor[i];
        }
    }

	float mediaP, mediaI;
	
    mediaP = totalP > 0  ? somaP / totalP : 0;
    mediaI = totalI > 0  ? somaI / totalI : 0;

    printf("Soma dos numeros pares: %d\n", somaP);
    printf("Media dos numeros pares: %.2f\n", mediaP);
    printf("Total de numeros pares: %d\n", totalP);
    printf("\n");
    printf("Soma dos numeros impares: %d\n", somaI);
    printf("M?dia dos numeros impares: %.2f\n", mediaI);
    printf("Total de numeros impares: %d\n", totalI);

    return 0;
}
