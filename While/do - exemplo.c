#include <stdio.h>

int main(){
	
	float num;
	
	do{
		
		printf("Digite um numero positivo: \n");
		scanf("%f", &num);
		
	}while(num <= 0);
	
	printf("Valor positivo: %f", num);
	
	return 0;
}
