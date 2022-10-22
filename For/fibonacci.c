#include <stdio.h>

int main(){
	
	int n, i, n1 = 0, n2 = 1, n3;
	
	scanf("%d", &n);
	
	while(n < 2 || n > 30){
		scanf("%d", &n);
	}
	
	printf("1\n");
	
	for(i = 1; i < n; i++){
		
		n3 = n2 + n1;
		printf("%d\n", n3);
		n1 = n2;
		n2 = n3;
	}
	
	return 0;
}
