#include <stdio.h>

int main(){
	
	int a, b, soma;
	
	scanf("%d %d", &a, &b);
	
	if(a < b){
		
		for( ; a <= b; a++){
			printf("%d ", a);
			soma += a;
		}
		
		printf("\nSoma = %d", soma);
		
	}else{
		
		for( ; b <= a; b++){
			printf("%d ", b);
			soma += b;
		}
		
		printf("\nSoma = %d", soma);
		
	}
	
	return 0;
}
