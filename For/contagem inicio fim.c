#include <stdio.h>

int main(){
	
	int i, inicio, fim;
	
	printf("Informe o inicio: ");
	scanf("%d", &inicio);
	printf("Informe o final: ");
	scanf("%d", &fim);
	
	for(i = inicio; i <= fim; i++){
		printf("i = %d \n", i);
	}
	
	printf("i final = %d \n", i);
	
	return 0;
}
