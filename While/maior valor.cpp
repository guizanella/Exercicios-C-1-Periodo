#include <stdio.h>

int main(){
	
	int n = 1, maior = 0, i = 0;
	
	do{
		scanf("%d", &n);
		
		if(n < -100 || n > 100){
			printf("Valor invalido! Tente novamente! \n");
		}else if(i == 0){
			maior = n;
			i++;
		}else if(n > maior){
			maior = n;
		}
		
	}while(n != 0);
	
	printf("%d", maior);
	
	return 0;
}
