#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int qtdPassageiros; 
	float pesoBag, distancia, consumoCombustivel;
	
	scanf("%d", &qtdPassageiros);
	scanf("%f", &pesoBag);
	scanf("%f", &distancia);
	
	consumoCombustivel = ((qtdPassageiros*0.03) + (pesoBag*0.89)) *  (0.017*distancia);
	
	printf("O consumo estimado de combustível é de %.2f litros de querosene", consumoCombustivel);
	
	return 0;
}
