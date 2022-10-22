#include <stdio.h>

int main(){
	
	int n, i, j;
	
	do{
		
		scanf("%d", &n);
		if(n < 2 || n > 10){
			printf("Valor invalido! Tente novamente. \n");
		}
		
	}while(n < 2 || n > 10);
	
	for(i = 1; i <= n; i++){
			
			for(j = 1; j <= n; j++){
				
				printf("a%d,%d ", i, j);		
		}
		
		printf("\n");
	}
	
	return 0;
}
