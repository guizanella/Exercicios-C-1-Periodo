#include <stdio.h>

int main(){
	
	int A=35, B=10, C=5, D=3;
	float X = 0; 
	
	if (A > 0){
		if (A < 10)
			X = 10 / A;
	}else if (B >= 10 && C < 20)
		X = B + C / 5;
	else if (D != 5)
		X = 4;
	else
		X = C + !D;

	printf("%.2f", X);
	
	return 0;
}
