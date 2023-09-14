#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
    int vetor[6], tempo, i;
    
    for(i = 0; i < 6; i++){
    	printf("Digite o valor da casa %d do vetor: ", i + 1);
    	scanf("%d", &vetor[i]);
	}

    printf("Vetor: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    for(i = 0; i < 3; i++) {
        tempo = vetor[i];
        vetor[i] = vetor[5 - i];
        vetor[5 - i] = tempo;
    }

    printf("\nVetor invertido: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
