/*(a) Construa uma fun��o encaixa que dados dois inteiros positivos a e b verifica se b corresponde aos �ltimos d�gitos de a.
(b) Usando a fun��o do item anterior, fa�a um programa que l� dois inteiros positivos a e b e verifica se o menor deles � segmento do outro.*/

#include <stdio.h>
#define VERDADEIRO 1//Define verdadeiro como 1
#define FALSO 0//define falso como 0

int encaixa(int a, int b) {//Fun��o que ira encaixar os dois inteiros positivos a e b
  
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return VERDADEIRO;//retona 1
  else
    return FALSO;//retorna 0

}

int main() {//Fun��o principal, ler os numeros e informa se um � segmento do outro ou n�o
  int a, b, subseq, maior, menor;

  printf("Digite dois inteiros positivos: ");
  scanf("%d %d", &a, &b);
  
  if (a > b) {// Se a maior que b
    maior = a;
    menor = b;
  }
  else {// se a menor ou igual a b
    maior = b;
    menor = a;
  }    

  subseq = FALSO;
  while (maior >= menor) {
    if (encaixa(maior,menor) == VERDADEIRO)
      subseq = VERDADEIRO;
    maior = maior/10;//Dividimos o valor de maior por 10
  }
  if (subseq == VERDADEIRO)
    printf("%d e' um segmento de %d\n",b,a);//� exibido em caso de ser verdadeiro, sendo segmento
  else
    printf("%d nao e' um segmento de %d\n",b,a);//� exibido em caso de n�o ser segmento

  return 0;
}


