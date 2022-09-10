/*Um matemático o italiano da idade média conseguiu modelar o ritmo de crescimento
da população de coelhos através de uma sequência de números naturais que passou
a ser conhecida como sequência de Fibonacci. O enésimo número da sequência de
Fibonacci dado pela seguinte fórmula de recorrência:

{

F1 = 1
F2 = 1

Fi = Fi-1 + Fi-2 para i < 3

/* Programa para calcular um determinado numero de Fibonacci */

#include <stdio.h>

int main() {//Inicio da função principal
  int n, f, fat, fprox,    //Variaveis inteiras                          
    cont; //Variavel contador          
  
  printf("Digite um numero n: ");
  scanf("%d", &n);//Ler o numero informado por o usuario
  
  
  f   = 0;
  fat = 1;
  cont = 1;
  
  while (cont < n) {
    fprox  = fat + f;  //Proximo numero da sequencia de fibonaci
    f   = fat;
    fat = fprox;
    cont = cont + 1;
  }
  printf("Numero %d seguindo a sequencia de  Finobacci = %d\n", n, fat);//Informa ao usuário o proximo numero da sequencia de fibonaci
  
  return 0;
}


