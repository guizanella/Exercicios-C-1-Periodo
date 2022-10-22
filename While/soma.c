#include <stdio.h>

int main(){
	
	int n = -1, soma = 0;
	
	printf("Soma numeros. \n");
	printf("Informe seus numeros ou 0 para terminar: \n");
	
	do{
		scanf("%d", &n);
		
		if(n < -100 || n > 100){
			
			printf("Valor invalido!\n");
			
		}else{
			soma = soma + n;
		}
	}while(n != 0);
	
	printf("%d", soma);
	
	return 0;
}
