#include <stdio.h>

int main(){
	//variáveis
	float indice;

	//entrada
	printf("Informe o índice de posuição: ");
	scanf("%f", &indice);

	//Processamento
	if(indice >= 0.3 && indice < 0.4){
		printf("Atenção: Indústrias do 1o grupo devem suspender as atividades.");
	}else if(indice >= 0.4 && indice < 0.5){
		printf("Atenção: Indústrias do 1o e 2o grupos devem suspender as atividades.");
	}else if(indice >= 0.5){
		printf("Atenção: Todos os grupos devem suspender as atividades.");
	}
}
