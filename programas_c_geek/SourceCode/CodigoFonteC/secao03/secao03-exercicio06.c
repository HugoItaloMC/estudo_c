#include <stdio.h>

int main(){
	//Declaração de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Qual valor você ganha por hora? ");
	scanf("%f", &valor_por_hora);

	printf("Quantas horas você trabalhou neste mês? ");
	scanf("%d", &horas_trabalhadas);

	//Processamento
	salario = (horas_trabalhadas * valor_por_hora);

	//Saída
	printf("Neste mês você vai receber R$ %.2f", salario);
}
