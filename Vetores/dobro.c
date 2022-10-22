#include <stdio.h>

int main(){
	
	int n[10], i;

	do{
		scanf("%d", &n[0]);
		
		if(n[0] < 1 || n[0] > 50){
			printf("Valor invalido! Tente novamente. \n");
		}
		
	}while(n[0] < 1 || n[0] > 50);
	
	printf("N[0] = %d \n", n[0]);
	
	for(i = 1; i < 10; i++){
		
		n[i] = n[i - 1] * 2;
		printf("N[%d] = %d \n", i, n[i]);
	}
	
	return 0;
}
