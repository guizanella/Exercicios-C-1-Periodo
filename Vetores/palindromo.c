#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int vetor[10], i, j, palindromo;

	for(i = 0; i < 10; i++){
		
		do{
			scanf("%d", &vetor[i]);
			
			if(vetor[i] < 0 || vetor[i] > 9){
				
				printf("Numero invalido! Tente novamente.\n");
			}
			
		}while(vetor[i] < 0 || vetor[i] > 9);			
	}
	
	j = 9; palindromo = 0;
	
	for(i = 0; (i < j) && (palindromo == 1); i++){
		
		if(vetor[i] != vetor[j]){
			palindromo = 0;
		}else{
			j--;
		}
	}
	
	if(palindromo == 1){
		printf("Eh palindromo.\n");
	}else{
		printf("Nao eh palindromo. \n");
	}

	return 0;
}
