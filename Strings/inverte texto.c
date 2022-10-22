#include<stdio.h>

int main(){
	
	char texto[20];
	int i, cont = 0;
	
	scanf("%[^\n]s", texto);
	
	for(i = 0; texto[i] != '\0'; i++){
		
		cont++;
	}
	
	for(i = (cont - 1); i >= 0; i--){
		
		printf("%c", texto[i]);
	}
	
	return 0;
}
