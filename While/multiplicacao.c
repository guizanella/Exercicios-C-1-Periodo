#include <stdio.h>

int main(){
	
	int n, vezes = 1, p, i;
	
	do{
		scanf("%d", &n);
		if( (n < 1) || (n > 30) ){
			printf("Valor invalido! Tente novamente! \n");
		}
	}while(n < 1 || n > 30);
	
	while(p < 300){
		printf("%d", n);
		
		p = n;
		i = 1;
		
		while(i <= vezes){
			p = p * 3;
			printf(" * 3");
			i++;
		}
		
		printf(" = %d\n", p);
		vezes++;
	}
	
	return 0;
}
