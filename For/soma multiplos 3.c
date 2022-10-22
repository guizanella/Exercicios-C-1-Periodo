#include <stdio.h>

int main(){
	
	int i, soma = 0;
	
	for( i = 30 ; i <= 300 ; i++ ){
				
		if(i % 3 == 0){
			printf("%d \n", i);
			soma += i;
		}	
	}
	
	printf("%d", soma);
	
	return 0;
}
