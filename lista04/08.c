#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
    int vetor1[5], vetor2[5], resultado[5], i;
    
    for(i = 0; i < 5; i++) {
        printf("Digite o %d valor do primeiro vetor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    for(i = 0; i < 5; i++) {
        printf("Digite o %d valor do segundo vetor: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    
    for(i = 0; i < 5; i++) {
        resultado[i] = vetor1[i] + vetor2[4 - i];
    }
    
    printf("A soma do primeiro vetor com o inverso do segundo vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", resultado[i]);
    }
    
    return 0;
}






