#include <stdio.h>

int main(){
	
	int tentativas = 0, numero_secreto = 3, numero;
	
	printf("Que numero estou pensando? (0 a 10) \n");
	
	do{
		if(tentativas == 3){
			break;
		}
		
		printf("Voce tem %d tentativas \n", 3 - tentativas);
		scanf("%d", &numero);
		
		if(numero == numero_secreto){
			printf("Certo!");
			break;
		}
		
		printf("Errado!");
		tentativas++;
		
	}while(numero != numero_secreto);
	
	return 0;
}
