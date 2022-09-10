/*10.Escreva um programa que receba uma matriz de números inteiros A, de dimensão
m × n, com 1 = m, n = 100, e dois números inteiros i e j, troque os conteúdos das
linhas i e j da matriz A e imprima a matriz resultante
*/
#include <stdio.h>
#define MAX 100
/* Recebe dois números inteiros a e b e devolve esses valores trocados */
void troca(int *a, int *b)//Função responsavel por a troca
{
int aux;//variavel inteira
aux = *a;//aux recebe posição de a
*a = *b;
*b = aux;
}
/* Recebe uma matriz de dimensão mxn de números inteiros
e os índices i e j de duas linhas da matriz, troca o
conteúdo dessas linhas e mostra a matriz resultante */
int main(void)//Função principal
{
int m, n, i, j, k, A[MAX][MAX];//Declaração das variaveis inteiras
scanf("%d%d", &m, &n);//Leitura das variaveis
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
scanf("%d", &A[i][j]);
scanf("%d%d", &i, &j);
for (k = 0; k < n; k++)
troca(&A[i][k], &A[j][k]);//Realiza troca
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++)
printf("%d ", A[i][j]);
printf("\n");
}
return 0;
}
