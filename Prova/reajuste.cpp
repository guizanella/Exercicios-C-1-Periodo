#include <stdio.h>

int main(){
	
	float valor, percentual, reajuste, produto;
	
	scanf("%f", &valor);
	scanf("%f", &percentual);
	
	reajuste = ((percentual / 100) * valor);
	produto = (valor + reajuste);
	
	printf("Valor do reajuste: %.2f\nValor do produto reajustado: %.2f", reajuste, produto);

	
	return 0;
}
