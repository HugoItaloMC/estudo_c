#include <stdio.h>

int main(){
	//variáveis
	int numero;

	//Entrada
	printf("Informe um número entre 1 e 10: ");
	scanf("%d", &numero);

	//Processamento
	while(numero < 1 || numero > 10){
		printf("Informe um número entre 1 e 10: ");
		scanf("%d", &numero);
	}
	for(int i = 1; i <= 10; i++){
		//5 X 1 = 5
		printf("%d X %d = %d\n", numero, i, (numero * i));
	}
}
