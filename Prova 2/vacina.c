#include <stdio.h>

int main(){
	
	int astra = 0, janssen = 0, pfizer = 0, coronavac = 0;
	char vacina;
	
	do{
		scanf(" %c", &vacina);
		
		if(vacina == 'a' || vacina == 'A'){
			astra++;
		}else if(vacina == 'j' || vacina == 'J'){
			janssen++;
		}else if(vacina == 'p' || vacina == 'P'){
			pfizer++;
		}else if(vacina == 'c' || vacina == 'C'){
			coronavac++;
		}else if(vacina == 'x' || vacina == 'X'){
			break;
		}else{
			printf("Tipo de vacina invalida! Tente novamente.\n");
		}
		
	}while(vacina != 'x' || vacina != 'X');
	
	printf("Numero de doses aplicadas:\nAstrazeneca: %d\nCoronavac: %d\nJanssen: %d\nPfizer: %d\n", astra, coronavac, janssen, pfizer);
	
	return 0;
}
