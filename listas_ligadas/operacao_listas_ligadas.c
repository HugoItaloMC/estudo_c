/*
  Iniciando a implementacão de uma lista ligada

   - Criar a Estrutura da Lista
   - Gerar seu nó dentro da Estrutura
 */


#include <stdio.h>


// Criacão da Lista Ligada (struct com encadeamento);
struct lista {
	int info;
	struct lista* prox; // Nó apontando para a próxima célula
};
typedef struct lista Lista;  // Definindo um nome para struct criada;

// iniciando a Lista ligada;
Lista* inicializa(void){
	return NULL
}



/*
 OPERACÕES COM LISTAS LIGADAS

  Podemos instanciar a lista em diferntes posicões, no comeco meio e fim
 se na implementacão for necessario esse requisito devemos tratar separadamente
 cada requisicão.

   - Insersão no comeco da lista :

       Após a criacão do nó, apontamos o nó para nossa
     célula instânciada e nossa célula deve apontar para NULL

   - Insersão no meio da lista (posicão) :

       Para chegarmos a  uma posicão  para alocarmos  nossa instância
     devemos ter um  mecanismo de  verificacão  e como listas não tem
     uma ordem especifica devemos primeiramente ordenalas para depois
     assim instânciar nossa célula na posicão desejada.  Fazendo  com
     que a célula  naquela posicão  deixe de apontar  para  a próxima
     célula e passe a apontar para a nossa célula instânciada e a nos-
     sa célula deve  apontar para  a célula  que  a célula verificada
     apontava antes.

   - Insersão no final da lista :

       Percorremos toda a lista até encontrar o valor de  NULL verifi-
      carmos a célula anterior, fazemos essa célula deixar de apontar
      para NULL e passe a apontar para nóssa célula instânciada e nos-
      sa célula agora deve apontar para NULL
*/

// Inserindo elementos no comeco da lista.

struct Lista* inserir(Lista* lista, int elemento){
	Lista* novo = (Lista*) malloc(sizeof(Lista)); // Alocando o espaco em memória para a insersão do elemento
	novo -> info = elemento;
	novo -> prox = lista;
	return novo;
}


// Iserindo elemento na posicão definida pela instância.

struct Lista* inserirPosicao(Lista* lista, int posicao, int elemento){
	int cont = 1;
	Lista *p = lista;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
    while (cont != posicao){
    	p = p -> prox;
    	cont++;
    }
    novo -> info = elemento;
    novo -> prox = p -> prox;
    p -> prox = novo;
    return lista;
}
