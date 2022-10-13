/*
  A regra de Fibonacci é uma sequência recursiva que soma o último elemento com o penúltimo elemento
(0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...)
 */

#include <stdio.h>

int fibonacci(int n){
	if (n == 0){
		return 0;
	}
	else{
		if(n == 1){
			return 1;
		}
		else{
			return fibonacci(n - 1) + fibonacci(n - 2);
		}
	}
}

void main(){
	int n1;
	printf("\t...Digite Valor : ");
	scanf("%d", &n1);

	fibonacci(n1);
	printf("... %d", n1);
}
