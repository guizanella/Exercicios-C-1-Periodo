#include <stdio.h>

int main(){
	
	char telefonou, esteve_local, mora_perto, devia, trabalhou;
	int contador = 0;
	
	printf("Telefonou para a vitima? (s ou n):");
	scanf("%c", &telefonou);
	if(telefonou == 's'){
		contador++;
	}
	
	printf("Esteve no local do crime? (s ou n):");
	scanf(" %c", &esteve_local);
	if(esteve_local == 's'){
		contador++;
	}
	
	printf("Mora perto da vitima? (s ou n):");
	scanf(" %c", &mora_perto);
	if(mora_perto == 's'){
		contador++;
	}
	
	printf("Devia dinheiro para a vitima? (s ou n):");
	scanf(" %c", &devia);
	if(devia == 's'){
		contador++;
	}
	
	printf("Ja trabalhou com a vitima? (s ou n):");
	scanf(" %c", &trabalhou);
	if(trabalhou == 's'){
		contador++;
	}
	
	if(contador == 2){
		printf("Voce eh suspeito.");
	}else if(contador >= 3 && contador <= 4){
		printf("Voce eh cumplice.");
	}else if(contador == 5){
		printf("Voce eh o assassino!!!!");
	}else{
		printf("Voce eh inocente.");
	}
	
	return 0;
}
