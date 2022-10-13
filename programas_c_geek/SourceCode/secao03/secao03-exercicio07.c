#include <stdio.h>

int main(){
	//Declarando variáveis
	float altura, peso_ideal;

	//Entrada
	printf("Qual sua altura? ");
	scanf("%f", &altura);

	//Processamento
	peso_ideal = (72.7 * altura) - 58;

	//Saída
	printf("Seu peso ideal seria %.2f", peso_ideal);
}
