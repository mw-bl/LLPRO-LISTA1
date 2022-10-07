#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int m, w, resto;
	float quociente;
	
	printf("Programa para calcular  o quociente entre 2 números e o resto entre eles \n\n");
	
	printf("Primeiro Número ");
	scanf("%d", &m);
	
	printf("Segundo Número ");
	scanf("%d", &w);
	
	quociente= (float) m/w;
	resto= m%w;
	
	printf("O quociente calculado é: %d e o resto foi: %d",quociente, resto);
	return 0;
}
