#include <stdio.h>

int main(){
	
	int n, i, j;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		for(j = 0; j < n; j++){
		
			for( ; j < n; j++){
			
				if(j < i){
					printf("- ");
				}else{
					printf("%d ", i);
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
