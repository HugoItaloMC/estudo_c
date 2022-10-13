#include <stdio.h>

int main(){
	//variáveis
	int numero, a, b;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &numero);

	//Processamento
	if(numero > 0){
		a = numero;
		printf("O %d número é positivo.", numero);
	}else{
		b = numero;
		printf("O %d número é negativo.", numero);
	}
}
