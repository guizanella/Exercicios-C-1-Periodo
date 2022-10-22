#include <stdio.h>

int main(){
	
	int i;
	float nota1, nota2, media;
	
	for(i = 0; i <50; i++){
		
		printf("Informe a nota P1: \n");
		scanf("%f", &nota1);
		printf("Informe a nota P2: \n");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		if(media >= 6){
			
			printf("Aluno %d aprovado. \n\n", i + 1);
			
		}else if(media >= 5 && media < 7){
			
			printf("Aluno %d em recuperacao. \n\n", i + 1);
			
		}else{
			
			printf("Aluno %d reprovado. \n\n", i + 1);
			
		}
	}
	
	return 0;
}
