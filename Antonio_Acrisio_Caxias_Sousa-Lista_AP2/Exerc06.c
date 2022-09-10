/*(a) Construa uma função encaixa que dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a.
(b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e verifica se o menor deles é segmento do outro.*/

#include <stdio.h>
#define VERDADEIRO 1//Define verdadeiro como 1
#define FALSO 0//define falso como 0

int encaixa(int a, int b) {//Função que ira encaixar os dois inteiros positivos a e b
  
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return VERDADEIRO;//retona 1
  else
    return FALSO;//retorna 0

}

int main() {//Função principal, ler os numeros e informa se um é segmento do outro ou não
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
    printf("%d e' um segmento de %d\n",b,a);//È exibido em caso de ser verdadeiro, sendo segmento
  else
    printf("%d nao e' um segmento de %d\n",b,a);//È exibido em caso de não ser segmento

  return 0;
}


