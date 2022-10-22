#include <stdio.h>

int main(){
	
	int operacao;
	int num1, num2;
	
	printf("Informe uma operacao: soma = 1 subtracao = 2 multiplicacao = 3 divisao = 4: ");
	scanf("%d", &operacao);
	
	printf("Informe o primeiro numero:");
	scanf(" %d", &num1);
	printf("Informe o segundo numero:");
	scanf(" %d", &num2);
	
	switch(operacao){
		case 1:{
			printf("%d", num1 + num2);
			break;
		}
		case 2:{
			printf("%d", num1 - num2);
			break;
		}
		case 3:{
			printf("%d", num1 * num2);
			break;
		}
		case 4:{
			if(num2 == 0){
				printf("Nao existe divisao por 0");
			}else{
				printf("%.2f", (float)num1 / num2);
			}
			break;
		}	
	}
	
	return 0;
}
