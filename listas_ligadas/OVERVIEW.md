# ESTRUTURA DE DADOS AVANCADAS
### struct :
            No desenvolvimento de softwares os dados devem ser persistidos 
          de forma estruturada, uma ordem pode conter diferentes tipos de 
          dados e se não houver uma ordem estruturada fica difícil de tratar
          os dados para uma requisicão.
            Na linguagem C existe um tipo especial de variável que armazena 
          diferentes tipos de dados em uma mesma ordem chamada 'STRUCT'.  
### Listas Ligadas :
            Pensando na grande escala de dados que existe em diversos contextos,
          não necessariamente queremos que nosso programa tenha determinado núme-
          ros de cadastros a serem efetuados e sim que conforma a necessidade um
          novo espaco seja atribuido para a persistência daquele dado, ou seja, a-
          tender a necessidade conforme solicitada.
            Uma estrutura de dados especial para atender esse requisito são "Listas
          ligadas" sendo elas uma estrutura dinâmica e linear onde podemos inserir, 
          remover e ou atualizar dados no comeco, fim ou meio da lista. Cada elemen
          to da sequência é armazenado em uma struct que se torna uma "Célula da Lis-
          ta".
            Em uma estrutura de de lista ligada cada céulua tem suas informacões conti-
          das e um "espaco"com um nó apontando para a próxima célula da lista gerando
          um encadeamento.
#### Fundamentos de uma Lista Ligada :
            Toda via que criamos uma struct com encadeamento devemos iniciala e seguin-
           do um passo para a implementacão.
 - Criacão ou definicão da estrutura de uma lista.
 
 - Inicializacão da lista. No nosso caso como estamos trabalhando com ponteiros vamos setar a inicializacão para NULL.
 
 - Insersão com base em um endereco como referência.
 
 - Alocacão de um endereco de nó para insersão na lista.
 
 - Remocão de nó com base em um endereco como referência.
 
 - Deslocamento do nó removido da lista. Muitas das vezes é modificado o parâmetro e não é removido o nó e assim gerando dersperdício de memória.