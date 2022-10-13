/*
  Funcões com Ponteiro;
  Ponteiros são um tipo especial de variável que cria um endereco de memória a variável
  Neste programa iremos gerar uma funcão randomica, para gerar números aleatórios
 utilizando ponteiros;
 */

#include <stdio.h>

int* gerarRandomico(){
	static int r[10];
	int a;

	for(a=0; a < 10; a++){
		r[a] = rand();
		printf("r[%d] = %d\n", a, r[a]);
	}
	return r;
}

int main(){
	gerarRandomico();
	return 0;
}
