#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int hr, min;
	
	scanf("%d", &hr);
	scanf("%d", &min);
	
	int totalMin = hr * 60 + min;
	
	printf("Passaram %d minutos.", totalMin);
	
	return 0;
}
