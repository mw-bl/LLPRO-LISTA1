#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float m, w, b, l, produto;
	
	printf("Programa para calcular produto entre 4 números \n\n");
	
	printf("Primeiro Número ");
	scanf("%f", &m);
	
	printf("Segundo Número ");
	scanf("%f", &w);
	
	printf("Terceiro Número ");
	scanf("%f", &b);

	printf("Quarto Número ");
	scanf("%f", &l);
	
	produto=m*w*b*l;
	
	printf("O produto calculado entre %f, %f, %f e %f foi: %.2f", m, w, b, l, produto);
	return 0;
}
