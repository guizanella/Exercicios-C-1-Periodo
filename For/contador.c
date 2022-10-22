#include <stdio.h>

int main(){
	
	int cont, vezes; 
	
	printf("Insira o numero do contador: ");
	scanf("%d", &vezes);
	
	for(cont = 0; cont < vezes; cont++){
		printf("Contador = %d \n", cont);
	}
	
	printf("Contador final = %d \n", cont);
	
	return 0;
}
