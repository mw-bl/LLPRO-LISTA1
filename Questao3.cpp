#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1, n2, media;
	
	printf("Calculadora de M�dia entre 2 n�meros \n\n");
	
	printf("Primeiro N�mero ");
	scanf("%f", &n1);
	
	printf("Segundo N�mero ");
	scanf("%f", &n2);

	media= (n1+n2)/2;
	
	printf("O valor calculado da m�dia entre os n�meros %f e %f foi: %f", n1, n2, media);
	return 0;
}
