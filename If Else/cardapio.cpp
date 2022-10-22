#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int bebida, prato, sobremesa;
	float total = 0;
	
	printf("Escolha uma bebida:"); printf("\n");
	printf("1 - Água - 1,50 R$"); printf("\n");
	printf("2 - Coca - 3,50 R$"); printf("\n");
	printf("3 - Latão - 4,00 R$"); printf("\n");
	scanf("%d", &bebida);
	
	printf("Escolha um prato:"); printf("\n");
	printf("1 - Hamburguer - 16,50 R$"); printf("\n");
	printf("2 - Pizza - 62,50 R$"); printf("\n");
	printf("3 - Churrasco - 50,00 R$"); printf("\n");
	scanf(" %d", &prato);
	
	printf("Escolha uma sobremesa:"); printf("\n");
	printf("1 - Bolo - 3,50 R$"); printf("\n");
	printf("2 - Sorvete - 5,50 R$"); printf("\n");
	printf("3 - Torta - 5,00 R$"); printf("\n");
	scanf(" %d", &sobremesa);
	
	if(bebida == 1){
		total = total + 1.50;
		printf("Água 1,50 R$"); printf("\n");
	}
	else if(bebida == 2){
		total = total + 3.50;
		printf("Coca 3,50 R$");
	}
	else if(bebida == 3){
		total = total + 4.00;
		printf("Latão 4,00 R$"); printf("\n");
	}
	
	if(prato == 1){
		total = total + 16.50;
		printf("Hamburguer 16,50 R$"); printf("\n");
	}
	else if(prato == 2){
		total = total + 62,50;
		printf("Pizza 62,50 R$"); printf("\n");
	}
	else if(prato == 3){
		total = total + 50.00;
		printf("Churrasco 50,00 R$"); printf("\n");
	}
	
	if(sobremesa == 1){
		total = total + 3.50;
		printf("Bolo 3,50 R$"); printf("\n");
	}
	else if(sobremesa == 2){
		total = total + 5.50;
		printf("Sorvete 5,50 R$"); printf("\n");
	}
	else if(sobremesa == 3){
		total = total + 5.00;
		printf("Torta 5,00 R$"); printf("\n");
	}
	
	printf("Total a pagar: %.2f R$", total);
	
	return 0;
}
