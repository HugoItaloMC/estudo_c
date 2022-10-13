/*
  Funcões recursivas em C;
  Funcões recursivas deve ter um "Ponto de Parada" e um "Caso Recursivo"
  Sua utilizacão visa deixar o código mais limpo e tratar cada ordem gerada em sua recursão
 de forma independente, em códigos onde se tem muitas linhas de códigos o bom é utilizar recursi-
vidade visando economizar linhas de código e deixar o código mais performático.
 */

// Funcão fatorial de 'N' com recursividade

int fatorial(int valor){
	if (valor != 1){
		return valor * fatorial(valor - 1);
	}else{
		return valor;
	}

}

void main(){
	float n1;

	printf("\t...Digite Número para Ver seu Fatorial : ");
	scanf("%.2f", &n1);

	printf("... Resultado : %f ",fatorial(n1));

}
