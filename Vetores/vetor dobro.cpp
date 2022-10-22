#include <stdio.h>

int main(){
	
	int TAM = 5, vetor1[TAM], vetor2[TAM];
	
	for(int i = 0; i < TAM; i++){
		scanf("%d", &vetor1[i]);
	}
	
	for(int i = 0; i < TAM; i++){
		vetor2[i] = vetor1[i] * 2;
	}
	
	for(int i = 0; i < TAM; i++){
		printf("vetor1[%d] = %d --> ", i, vetor1[i]);
		printf("vetor2[%d] = %d\n", i, vetor2[i]);
	}
	
	return 0;
}
