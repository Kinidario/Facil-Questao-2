//Bibliotecas necessárias
#include <stdio.h>
#include<math.h>

//Função que calcula o número de binários
int Binario(int n){
//Variáveis da função
  int cont = 0, soma = 0, i=0;
//Estrutura de repetição
  while(1){
// A contagem de quantidade de '1' começa achando a potência de 2 mais próxima de n e que não seja maior que n.
    if(pow(2,i) > n )
      break;
    
    i = i+1;
  }

  i = i - 1;
// Se o número for ímpar o contador já soma 1 por causa da potência 2^0  
  if(n%2 != 0)
    cont = cont + 1;
//Estrutura de repetição que vai de i até 1
  for(i; i > 0; i=i-1 ){
    soma = soma + pow(2,i);
//Se a soma passar do valor de n, então o código remove aquela soma e passa para uma potência de 2 menor
    if(soma > n){
      soma = soma - pow(2,i);
      continue;
    }
//Se a soma não passar então o contador soma 1
    else
     cont = cont + 1;
  }
//Retorna o valor do contador
  return cont;
}

//Função principal
int main(void) {
  int n;
  
//Recebendo as variáveis do teclado
  printf("digite um numero : ");
  scanf("%d", &n);

//Chamando a função e printando o número de 1.
  printf("%d", Binario(n));
  
  return 0;
}
