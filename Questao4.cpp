#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float m, w, b, l, produto;
	
	printf("Programa para calcular produto entre 4 n�meros \n\n");
	
	printf("Primeiro N�mero ");
	scanf("%f", &m);
	
	printf("Segundo N�mero ");
	scanf("%f", &w);
	
	printf("Terceiro N�mero ");
	scanf("%f", &b);

	printf("Quarto N�mero ");
	scanf("%f", &l);
	
	produto=m*w*b*l;
	
	printf("O produto calculado entre %f, %f, %f e %f foi: %.2f", m, w, b, l, produto);
	return 0;
}
