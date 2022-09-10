/* Dizemos que um número inteiro positivo n é perfeito se for igual à soma de seus
divisores positivos diferentes de n.

Exemplo: 6 é perfeito, pois 1+2+3 = 6.
Verificar se um dado número inteiro positivo é perfeito. */

#include <stdio.h>

int main() {// Função principal
  int n, s,i, divisor; //Variaveis do tipo inteiro

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);//Ler um numero inteiro que deve ser positivo
  for(i=0;n<=0;i++){//Verifica se o numero digitado é positivo, caso não seja solicita a inserção de um 
  	  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);//Ler um numero inteiro que deve ser positivo
}
  //Inicialização
  s = 0;
  
  for (divisor = 1; divisor < n; divisor++){//verifica os divisores
    if (n % divisor == 0)
      s = s + divisor;//s é somado ao divisor
  }
  
  if (n == s)
    printf("O numero %d e' perfeito\n", n);
  else 
    printf("O numero %d nao e' perfeito\n", n);
  
  return 0;
}

