#include <stdio.h>

int main(){
	
	int n, i = 2;
	
	do{
		scanf("%d", &n);
		
		if(n <= 5 || n >= 2000){
			printf("Valor invalido! Tente novamente! \n");
		}
		
	}while(n <= 5 || n >= 2000);
	
	while(i <= n){
		
		printf("%d^2 = %d \n", i, i * i);
		i += 2;
	}
	
	return 0;
}
