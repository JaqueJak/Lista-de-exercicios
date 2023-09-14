#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
    int n1, n2, n3, n4, n5;
    int temp;
    
    printf("Digite cinco numeros com espaços: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2 < n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n3 < n4){
        temp = n3;
        n3 = n4;
        n4 = temp;
    }
    if(n4 < n5){
        temp = n4;
        n4 = n5;
        n5 = temp;
    }
    
    
    
    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2 < n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n3 < n4){
        temp = n3;
        n3 = n4;
        n4 = temp;
    }
    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2 < n3){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n1 < n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Numeros em ordem decrescente: ");
    printf("\t%d\t%d\t%d\t%d\t%d\n", n1, n2, n3, n4, n5);

    return 0;
}

