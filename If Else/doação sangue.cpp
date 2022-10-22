#include <stdio.h>

int main(){
	
	int idade, vezes;
	char genero;
	float peso;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Informe seu peso: ");
	scanf(" %f", &peso);
	
	printf("Informe seu genero (f ou m): ");
	scanf(" %c", &genero);
	
	printf("Quantas vezes voce doou sangue esse ano? ");
	scanf(" %d", &vezes);
	
	if(idade >= 18 && idade <= 67 && peso >= 45){
		if(genero == 'm' && vezes < 4){
			printf("Voce pode doar sangue!");
		}else if(genero == 'f' && vezes < 3){
			printf("Voce pode doar sangue!");
		}else{
			printf("Genero invalido.");
		}	
	}else{
		printf("Voce nao pode doar sangue.");
	}
		
			
	return 0;
}
