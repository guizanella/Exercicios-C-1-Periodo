#include <stdio.h>

int main(){
	
	int n = 0;
	
	printf("Adivinhe o numero que estou pensando (0 a 10)"); printf("\n");
	
	while(n != 3){
		
		scanf("%d", &n);
		if(n != 3){
			printf("Errado! Tente novamente."); printf("\n");
		}
	}
	
	printf("Correto!");
	
	return 0;
}
