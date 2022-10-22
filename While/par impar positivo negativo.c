#include <stdio.h>

int main(){
	
	int n;
	
	do{
		scanf("%d", &n);
		
		if(n < -101 || n > 100){
			printf("Valor invalido! Tente novamente! \n");
		}else if(n == -101){
			break;
		}else if(n == 0){
			printf("NULL \n");
		}else if(n > 0 && (n % 2) == 0){
			printf("EVEN POSITIVE \n");
		}else if(n > 0 && (n % 2) != 0){
			printf("ODD POSITIVE \n");
		}else if(n < 0 && (n % 2) == 0){
			printf("EVEN NEGATIVE \n");
		}else{
			printf("ODD NEGATIVE \n");
		}
		
	}while(n != -101);
	
	return 0;
}
