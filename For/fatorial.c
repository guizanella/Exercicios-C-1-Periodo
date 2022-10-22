#include <stdio.h>

int main(){
	
	int i, fatorial, num;
	
	printf("Informe o valor para calcular: ");
	scanf("%d", &num);
	
	fatorial = 1;
	
	for(i = num; i > 0; i--){
		
		fatorial *= i;
	}
	
	printf("Fatorial = %d \n", fatorial);
	
	return 0;
}
