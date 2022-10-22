#include<stdio.h>

int main(){
	
	int i, n, maior = 0, vezes = 0;
	
	for(i = 0; i < 10; i++){
	
		scanf("%d", &n);
		
		if(n > maior){
			maior = n;
			vezes = i+1;
		}	
	}
	
	printf("%d \n%d", maior, vezes);
	
	return 0;
}
