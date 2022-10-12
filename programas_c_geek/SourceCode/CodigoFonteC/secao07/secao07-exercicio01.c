#include <stdio.h>

int main(){
	//variáveis
	int n, maior = 0;

	//Entradas
	printf("Informe um número: ");
	scanf("%d", &n);

	//Processamento
	while(n != 0){
		if(n > maior){
			maior = n;
		}
		//Entradas
		printf("Informe um número: ");
		scanf("%d", &n);
	}
	printf("O maior número é %d", maior);
}
