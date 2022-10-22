#include <stdio.h>

int main(){
	
	float perc_valido, perc_branco, perc_nulo, eleitores, voto_branco, voto_nulo, voto_valido;
	
	scanf("%f", &eleitores);
	scanf("%f", &voto_branco);
	scanf("%f", &voto_nulo);
	
	voto_valido = eleitores - voto_branco - voto_nulo;
	perc_valido = ((voto_valido * 100) / eleitores);
	perc_branco = ((voto_branco * 100) / eleitores);
	perc_nulo = ((voto_nulo * 100) / eleitores);
	
	printf("Total de votos validos: %.0f", voto_valido); printf("\n");
	printf("----------------------------"); printf("\n");
	printf("Votos validos: %.2f%%", perc_valido); printf("\n");
	printf("Votos brancos: %.2f%%", perc_branco); printf("\n");
	printf("Votos nulos: %.2f%%", perc_nulo); 
	
	return 0;
}
