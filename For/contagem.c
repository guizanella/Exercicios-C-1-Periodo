#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int i, n;
	
	for(i = 1; i <= 10; i++){
		
		printf("Mariana conta %d \nMariana conta %d: ", i, i);
		
		if(i == 1){
			printf("� %d, ", i);
		}
		
		for(n = 1; n <= i; ){
			printf("� %d, ", n);
			n++;
		}

		printf("�! \nAna, viva a Mariana, viva a Mariana! \n\n");
	}
	
	return 0;
}
