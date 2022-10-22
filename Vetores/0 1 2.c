#include <stdio.h>

int main(){
	
	int t, i, j = 0;
	
	do{
		
		scanf("%d", &t);
		
		if(t < 2 || t > 5){
			printf("Valor invalido! Tente novamente. \n");
		}
		
	}while(t < 2 || t > 5);
	
	for(i = 0; i < 50; i++){
		
		printf("N[%d] = %d \n", i, j);
		j++;
		
		if(j == t){
			j = 0;
		}
	}
	
	return 0;
}
