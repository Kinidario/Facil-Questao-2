#include <stdio.h>
#include<math.h>

int Binario(int n){
  int cont = 0, soma = 0, i=0;
  while(1){
    if(pow(2,i) > n )
      break;
    
    i = i+1;
  }

  i = i - 1;
  
  if(n%2 != 0)
    cont = cont + 1;
  
  for(i; i > 0; i=i-1 ){
    soma = soma + pow(2,i);
    if(soma > n){
      soma = soma - pow(2,i);
      continue;
    }
    else
     cont = cont + 1;
  }
  return cont;
}

int main(void) {
  int n, i=0;
  
  printf("digite um numero : ");
  scanf("%d", &n);

  printf("%d", Binario(n));
  
  return 0;
}