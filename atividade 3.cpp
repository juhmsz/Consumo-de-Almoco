#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int semana [7];
	int i;
	int soma;
	float media;
	
	printf("=======================================\n");
	printf("Seja bem vindo ao FOODCRONTROL!\n");
	printf("Por meio desse sistema, voc� poder� ter controle sobre os consumo de almo�os ao longo da semana\n");
	printf("=======================================\n");
	
	for(i=0; i<7; i++) { //Por meio desse la�o de repeti��o o vetor poder� ser executado
		printf("Quantidade de pratos do dia %d:", i + 1);
		scanf ("%d", &semana[i]);
		printf("Valor computado!\n");
		printf(" \n");
		soma += semana[i]; // acumula os dados para fazer a soma final
	}

	media = (float)soma / 7; //calcula a m�dia baseada na soma e na quantidade do vetor
	printf("=======================================\n");
	printf("Parab�ns! Os dados desse semana foram computados:\n");
	printf ("A m�dia de pratos consumidos por dia �: %.2f\n", media);
	printf("=======================================\n");
	
	return 0;
}

	
	
