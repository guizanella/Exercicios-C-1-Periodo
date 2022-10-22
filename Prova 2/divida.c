#include<stdio.h>

int main(){
	
	int servidor;
	float divida, juros, valor_parcela, parcelas, divida_total;
	
	scanf("%f", &divida);
	scanf("%d", &servidor);
	
	if(servidor == 0){
		
		for(parcelas = 0; parcelas <= 12; parcelas += 3){
			
			if(parcelas == 0){
				
				juros = 0;
				printf("Valor divida: %.2f   Valor juros: 0.00   Parcelas: 1   Valor Parcela: %.2f \n", divida, divida);
				
			}else if(parcelas == 3){
				
				juros = (10 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 3   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else if(parcelas == 6){
				
				juros = (20 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 6   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else if(parcelas == 9){
				
				juros = (30 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 9   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else{
				
				juros = (40 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 12   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}
			
		}
		
	}else if(servidor == 1){
		
		for(parcelas = 0; parcelas <= 12; parcelas += 3){
			
			if(parcelas == 0){
				
				juros = 0;
				printf("Valor divida: %.2f   Valor juros: 0.00   Parcelas: 1   Valor Parcela: %.2f \n", divida, divida);
				
			}else if(parcelas == 3){
				
				juros = (10 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 3   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else if(parcelas == 6){
				
				juros = (15 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 6   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else if(parcelas == 9){
				
				juros = (20 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 9   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}else{
				
				juros = (25 * divida / 100);
				divida_total = divida + juros;
				valor_parcela = divida_total / parcelas;
				printf("Valor divida: %.2f   Valor juros: %.2f   Parcelas: 12   Valor Parcela: %.2f \n", divida_total, juros, valor_parcela);
				
			}
			
		}
		
	}
	
	return 0;
}
