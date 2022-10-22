#include<stdio.h>

int main(){
	
	int pessoas, i, idade, um_dez = 0, onze_vinte = 0, vinteum_trinta = 0, mais30 = 0;
	float peso, peso1 = 0, peso2 = 0, peso3 = 0, peso4 = 0;
	
	scanf("%d", &pessoas);
	
	for(i = 0; i < pessoas;){
		
		scanf(" %d", &idade);
		scanf(" %f", &peso);
		
		if(idade < 1 || peso < 1){
			printf("Entrada Invalida! \n");
			
		}else if(idade >= 1 && idade <= 10){
			um_dez++;
			peso1 += peso;
			i++;
			
		}else if(idade >= 11 && idade <= 20){
			onze_vinte++;
			peso2 += peso;
			i++;
			
		}else if(idade >= 21 && idade <= 30){
			vinteum_trinta++;
			peso3 += peso;
			i++;
			
		}else{
			mais30++;
			peso4 += peso;
			i++;
		}
	}
	
	if(um_dez > 0){
		printf("1 a 10 anos: %.2f \n", peso1 / um_dez);
	}
	
	if(onze_vinte > 0){
		printf("11 a 20 anos: %.2f \n", peso2 / onze_vinte);
	}
	
	if(vinteum_trinta > 0){
		printf("21 a 30 anos: %.2f \n", peso3 / vinteum_trinta);
	}
	
	if(mais30 > 0){
		printf("31 anos ou mais: %.2f \n", peso4 / mais30);
	}
	
	return 0;
}
