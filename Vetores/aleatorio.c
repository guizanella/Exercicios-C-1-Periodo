#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int a[20], x, i;
	
	srand(time(NULL));
	
	for(i = 0; i < 20; i++){
	
		a[i] = rand()%100;
	}
	
	for(i = 0; i < 20; i++){
		printf("A[%d] = %d \n", i, a[i]);
	}
	
	printf("Informe o elemento a ser pesquisado: ");
	scanf("%d", &x);
	
	int pos = -1;
	
	for(i = 0; (i < 20 && pos < 0); i++){
		if(a[i] == x){
			pos = i;
		}
	}
	
	if(pos >= 0){
		printf("A[%d] = %d\n", pos, a[pos]);
	}else{
		printf("Elemento nao esta armazenado no vetor\n");
	}
	
	return 0;
}
