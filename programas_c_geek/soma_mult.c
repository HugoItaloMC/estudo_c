/*
  Escreva um programa que some dois valores e multique a soma pelo primeiro valor
 */

#include <stdio.h>

int main(){
	int n1, n2, operacao;
	printf("\t...Digite Valor 1 : ");
	scanf("%d", &n1);

	printf("\t...Digite Valor 2 : ");
	scanf("%d", &n2);

	operacao = (n1 + n2) * n1;

	printf("...Resultado : %d ", operacao);
}
