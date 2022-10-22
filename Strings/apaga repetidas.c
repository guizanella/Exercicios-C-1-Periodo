#include <stdio.h>
#include <string.h>

int main(){
	
	char texto[50], letrasUnicas[50] = {'\0'};
	int ocorrenciasLetras[50];
	
	scanf("%s", texto);
	
	int tamanhoTexto = 0, i, j, k, ocorrencias;
	
	for(i = 0; texto[i] != '\0'; i++){
		tamanhoTexto++;
	}
	
	for(i = 0; texto[i] != '\0'; i++){
		
		int letraCadastrada = 0;
		
		if(letrasUnicas[0] == '\0'){
			letrasUnicas[0] = texto[i];
			letrasUnicas[1] = '\0';
			ocorrenciasLetras[0] = 1;
		}else{
			for(j = 0; letrasUnicas[j] != '\0'; j++){
				if(letrasUnicas[j] == texto[i]){
					letraCadastrada = 1;
					ocorrencias = ocorrenciasLetras[j];
					ocorrenciasLetras[j] = ocorrencias + 1;
				}
			}
			if(letraCadastrada == 0){
				int tamanhoLetrasUnicas = 0;
				for(k = 0; letrasUnicas[k] != '\0'; k++){
					tamanhoLetrasUnicas++;
				}
			letrasUnicas[tamanhoLetrasUnicas] = texto[i]; 
			letrasUnicas[tamanhoLetrasUnicas + 1] = '\0';
			ocorrenciasLetras[tamanhoLetrasUnicas] = 1;
			}
		}
	}
	
	printf("\nLetras Unicas: %s \n", letrasUnicas);
	
	for(j = 0; letrasUnicas[j] != '\0'; j++){
		printf("%c: %d\n", letrasUnicas[j], ocorrenciasLetras[j]);
	}
	
	return 0;
}
