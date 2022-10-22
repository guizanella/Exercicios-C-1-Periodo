#include <stdio.h>

int main(){
	
	char texto[50], textoUPPER[50];
	int deslocamento;
	
	printf("Insira o texto: ");
	scanf("%[^\n]s", texto);
	
	printf("Insira o deslocamento: ");
	scanf("%d", &deslocamento);
	
	int i;
	
	for(i = 0; texto[i] != '\0'; i++){
		
		if(texto[i] == 32){
			textoUPPER[i] = texto[i];
		}else{
			textoUPPER[i] = (texto[i] - 32);
		}
	}
	
	textoUPPER[i] = '\0';
	
	for(i = 0; textoUPPER[i] != '\0'; i++){
		
		if(textoUPPER[i] != 32){
			
			int asciiPos = textoUPPER[i] + deslocamento;
			
			if(asciiPos > 90){
				asciiPos = asciiPos - 26;
			}
			
			textoUPPER[i] = asciiPos;
		}
	}
	
	printf("Texto sifrado: ");
	printf("%s", textoUPPER);
	
	return 0;
}
