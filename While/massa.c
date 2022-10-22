#include <stdio.h>

int main(){
	
	float massa_inicial, massa_final;
	int tempo, horas, minutos, segundos;
	
	scanf("%f", &massa_inicial);
	massa_final = massa_inicial;
	tempo = 0;
	
	while(massa_final >= 0.5){
		
		massa_final = massa_final / 2;
		tempo = tempo + 50;
	}
	
	horas = (tempo / 3600);
	minutos = (tempo % 3600) / 60;
	segundos = (tempo%3600) % 60;
	
	printf("Massa Inicial.: %.3f gramas \n", massa_inicial); 
	printf("Massa Final...: %.3f gramas \n\n", massa_final); 
	printf("Tempo Total...: %d segundos \n", tempo); 
	printf("Massa Horas...: %.2d:%.2d:%.2d", horas, minutos, segundos); 
	
	return 0;
}
