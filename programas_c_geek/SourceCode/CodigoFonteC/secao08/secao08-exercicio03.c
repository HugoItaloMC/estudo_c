#include <stdio.h>

int main(){
	//variaveis
	int vetor[10];//0...9
	//entradas
	for(int i = 0; i < 10; i++){
		printf("Informe o valor para o vetor: ");
		scanf("%d", &vetor[i]);
	}
	for(int i = 9; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}

}
