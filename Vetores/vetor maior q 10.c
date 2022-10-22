#include <stdio.h>

int main(){
	
	int a[10], i;
	
	for(i = 0; i < 10; i++){
		
		scanf("%d", &a[i]);
	}
	
	for(i = 9; i >= 0; i--){
		
		if(a[i] >= 10){
			
			printf("A[%d] = %d\n", i, a[i]);
		}
	}
	
	return 0;
}
