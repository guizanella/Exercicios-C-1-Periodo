#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano_vendas, ano_ref, perc_vendas;
	
	printf("Digite o ano que recebeu aumento de vendas: ");
	scanf("%d", &ano_vendas);
	printf("Digite o ano de refer�ncia: ");
	scanf("%d", &ano_ref);
	printf("Digite o percentual de aumento de vendas: ");
	scanf("%d", &perc_vendas);
	
	printf("Tivemos no ano %d um aumento de %d%% nas vendas em rela��o ao ano %d.", ano_vendas, perc_vendas, ano_ref);
	
	return 0;
}
