#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char texto[100];
	int i, j;

	scanf("%[^\n]s", texto);
	
	for(i = 0; texto[i] != '\0'; i++){
		
		if(texto[i] == '$'){
			
			for(j = i + 1; texto[j] != ' ' && texto[j] != '\0'; j++){
				
				texto[j] = '*';
				i = j;
			}
		}
	}

	printf("%s", texto);

	return 0;
}
