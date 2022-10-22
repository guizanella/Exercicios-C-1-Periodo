#include <stdio.h>

int main(){
	
	float nota1, nota2, nota3;
	
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	printf("Media = %.2f", (nota1+nota2+nota3)/3);
	
	return 0;
}
