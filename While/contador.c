#include <stdio.h>

int main(){
	
	int cont = 0, n;
	
	scanf("%d", &n);
	
	while(cont < n){
		
		printf("Contador = %d \n", cont);
		cont++;	
	}
	
	printf("Contador final = %d", cont);
	
	return 0;
}
