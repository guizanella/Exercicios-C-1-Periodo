#include <stdio.h>

int main(){
	
	char nome1[15] = "ALGORITMOS";
	
	printf("%s \n", nome1);
	
	//alterar letra por letra utilizando indices separadamente.
	
	nome1[0] = 'b';
	nome1[1] = 'o';
	nome1[2] = 'l';
	nome1[3] = 'o';
	nome1[4] = '\0'; //força o final do string
	
	//imprimirá apenas o "bolo"	
	printf("%s \n", nome1);
	
	return 0;
}
