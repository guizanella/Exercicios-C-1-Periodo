#include<stdio.h>

int main(){
	
	char letras[20];
	int i, vogais = 0, espacos = 0, consoantes = 0;
	
	scanf("%[^\n]s", letras);
	
	for(i = 0; letras[i] != '\0'; i++){
		
		if(letras[i]=='a'||letras[i]=='A'||letras[i]=='e'||letras[i]=='E'||letras[i]=='i'||letras[i]=='I'||letras[i]=='o'||letras[i]=='O'||letras[i]=='u'||letras[i]=='U'){
			vogais++;
		}else if(letras[i] == ' '){
			espacos++;
		}else{
			consoantes++;
		}
	}
	
	printf("%d", (vogais + (consoantes * 2)));
	
	return 0;
}
