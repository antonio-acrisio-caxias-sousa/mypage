/*Um matem�tico o italiano da idade m�dia conseguiu modelar o ritmo de crescimento
da popula��o de coelhos atrav�s de uma sequ�ncia de n�meros naturais que passou
a ser conhecida como sequ�ncia de Fibonacci. O en�simo n�mero da sequ�ncia de
Fibonacci dado pela seguinte f�rmula de recorr�ncia:

{

F1 = 1
F2 = 1

Fi = Fi-1 + Fi-2 para i < 3

/* Programa para calcular um determinado numero de Fibonacci */

#include <stdio.h>

int main() {//Inicio da fun��o principal
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
  printf("Numero %d seguindo a sequencia de  Finobacci = %d\n", n, fat);//Informa ao usu�rio o proximo numero da sequencia de fibonaci
  
  return 0;
}


