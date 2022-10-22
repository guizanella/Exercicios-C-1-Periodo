#include <stdio.h>

int main(){
	
	char texto[30], letra;
	int i;
	
	scanf("%[^\n]s", texto);
	scanf(" %c", &letra);
	
	for(i = 0; texto[i] != '\0'; i++){
		
		if(texto[i] != letra){
			printf("%c", texto[i]);
		}
		
	}
	
	return 0;
}
