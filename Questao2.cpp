#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, n3, media;
	
	printf("Calculadora de M�dia entre 3 n�meros \n\n");
	
	printf("Primeiro N�mero ");
	scanf("%f", &n1);
	
	printf("Segundo N�mero ");
	scanf("%f", &n2);
	
	printf("Terceiro N�mero ");
	scanf("%f", &n3);
	
	media= n1+n2+n3/3
	
	printf("O valor calculado da m�dia entre os n�meros %f, %f e %f foi: %f", n1, n2, n3, media);
	return 0;
}
