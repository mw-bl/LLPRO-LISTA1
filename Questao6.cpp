#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, w, somatorio, b, subtracao;
	
	printf("Calcular a soma entre dois n�meros, ler mais um n�mero e subtrair esse n�mero da soma \n\n");
	
	printf("Primeiro N�mero ");
	scanf("%f", &m);
	
	printf("Segundo N�mero ");
	scanf("%f", &w);
	
	somatorio = m+w;
	
	printf("Terceiro N�mero ");
	scanf("%f", &b);
	
	subtracao = somatorio-b;
	
	printf("O resultado da subtra��o �: %.2f", subtracao);
	return 0;
}
