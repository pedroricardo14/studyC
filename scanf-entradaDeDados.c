#include <stdio.h>

int main() {
	int idade = 0;
//	int ano = 1950;
	float peso = 0.0;
	
//	printf("Valor inicial da idade e o ano: %d.\n", idade);
	
//	printf("Digite uma idade e o ano:\n");
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
//	printf("Ano informado: %d.\n", ano);
	printf("Peso informado: %f.\n", peso);
}
