#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int kWh;
	double tarifa, taxa_impostos, servicos, total;
	
	scanf("%d", &kWh);
	scanf("%lf", &tarifa);
	scanf("%lf", &taxa_impostos);
	scanf("%lf", &servicos);
	
	total = (kWh * tarifa) + taxa_impostos + servicos;
	
	printf("Dados do faturamento:"); printf("\n");
	printf("Consumo............:%d kWh", kWh); printf("\n");
	printf("Tarifa (R$)........:%.3lf", tarifa); printf("\n");
	printf("Total (R$).........:%.2lf", kWh * tarifa); printf("\n");
	printf("Taxas e impostos...:%.2lf", taxa_impostos); printf("\n");
	printf("Serviços...........:%.2lf", servicos); printf("\n");
	printf("VALOR (R$).........:%.2lf", total); 
	
	return 0;	
}
