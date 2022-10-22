#include <stdio.h>

int main(){
	
	int x[10], y[5], i, j = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &x[i]);	
	} 

	for(i = 0; i < 10; i += 2){
		y[j] = x[i];
		j++;
	}
	
	for(j = 0; j < 5; j++){
		printf("Y[%d] = %d \n", j, y[j]);
	}

	return 0;
}
