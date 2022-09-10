/* Dizemos que um n�mero inteiro positivo n � perfeito se for igual � soma de seus
divisores positivos diferentes de n.

Exemplo: 6 � perfeito, pois 1+2+3 = 6.
Verificar se um dado n�mero inteiro positivo � perfeito. */

#include <stdio.h>

int main() {// Fun��o principal
  int n, s,i, divisor; //Variaveis do tipo inteiro

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);//Ler um numero inteiro que deve ser positivo
  for(i=0;n<=0;i++){//Verifica se o numero digitado � positivo, caso n�o seja solicita a inser��o de um 
  	  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);//Ler um numero inteiro que deve ser positivo
}
  //Inicializa��o
  s = 0;
  
  for (divisor = 1; divisor < n; divisor++){//verifica os divisores
    if (n % divisor == 0)
      s = s + divisor;//s � somado ao divisor
  }
  
  if (n == s)
    printf("O numero %d e' perfeito\n", n);
  else 
    printf("O numero %d nao e' perfeito\n", n);
  
  return 0;
}

