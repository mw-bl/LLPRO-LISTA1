#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, w, somatorio, b, subtracao;
	
	printf("Calcular a soma entre dois números, ler mais um número e subtrair esse número da soma \n\n");
	
	printf("Primeiro Número ");
	scanf("%f", &m);
	
	printf("Segundo Número ");
	scanf("%f", &w);
	
	somatorio = m+w;
	
	printf("Terceiro Número ");
	scanf("%f", &b);
	
	subtracao = somatorio-b;
	
	printf("O resultado da subtração é: %.2f", subtracao);
	return 0;
}
