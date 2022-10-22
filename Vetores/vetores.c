#include <stdio.h>

int main(){
	
	int vetor[10], i = 4;
	
	vetor[0] = 100;
	vetor[1] = 200;
	vetor[2] = vetor[0] + vetor[1];
	vetor[3] = 10 * 40;
	vetor[i] = vetor[i - 1] + vetor[0];
	
	printf("%d, %d, %d, %d, %d \n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[i]);
	
	return 0;
}
