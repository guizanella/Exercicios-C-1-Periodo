#include<stdio.h>

int main(){
	
	char texto[30];
	int i;
	
	scanf("%[^\n]s", texto);
	
	for(i = 0; texto[i] != '\0'; i++){
		
		if(texto[i] == '1'||texto[i] == '2'||texto[i] == '3'||texto[i] == '4'||texto[i] == '5'||texto[i] == '6'||texto[i] == '7'||texto[i] == '8'||texto[i] == '9'||texto[i] == '0'){
			printf("%c", texto[i]);
		}
	}
	
	return 0;
}
