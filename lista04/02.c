#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	char time[15][5], temp[15];
	int vitorias[15], empate[15], totalP[15], tempo, i;
	
	for(i = 0; i < 5; i++){
		printf("Nome do time: ");
		scanf("%s", &time[i]);
				
		printf("Vitórias do time %s: ", time[i]);
		scanf("%d", &vitorias[i]);
		
		printf("Empates do time %s: ", time[i]);
		scanf("%d", &empate[i]);
	}
	
	for(i = 0; i < 5; i++){
		vitorias[i] = vitorias[i] * 3;
		
		totalP[i] = vitorias[i] + empate[i];
		vitorias[i] + i;
		empate[i] + i;
		totalP[i] + i;
		
	}
	
	for(i = 0; i < 25; i++){
		if(totalP[0] < totalP[1]){
			strcpy(tempo, time[0]);
			strcpy(time[0], time[1]);
			strcpy(time[1], temp);

			tempo = totalP[0];
			totalP[0] = totalP[1];
			totalP[1] = tempo;
		}
		
		if(totalP[1] < totalP[2]){
			strcpy(temp, time[1]);
			strcpy(time[1], time[2]);
			strcpy(time[2], temp);

			tempo = totalP[1];
			totalP[1] = totalP[2];
			totalP[2] = tempo;
		}
		
		if(totalP[2] < totalP[3]){
			strcpy(temp, time[2]);
			strcpy(time[2], time[3]);
			strcpy(time[3], temp);

			tempo = totalP[2];
			totalP[2] = totalP[3];
			totalP[3] = tempo;
		}
		
		if(totalP[3] < totalP[4]){
			strcpy(temp, time[3]);
			strcpy(time[3], time[4]);
			strcpy(time[4], temp);

			tempo = totalP[3];
			totalP[3] = totalP[4];
			totalP[4] = tempo;
		}
	}
	printf("\nTime: Pontos:\n");
	for(i = 0; i < 5; i++){
		printf("%s\t%d\n", time[i], totalP[i]);
	}
	
	return 0;
}
