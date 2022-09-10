/*10.Escreva um programa que receba uma matriz de n�meros inteiros A, de dimens�o
m � n, com 1 = m, n = 100, e dois n�meros inteiros i e j, troque os conte�dos das
linhas i e j da matriz A e imprima a matriz resultante
*/
#include <stdio.h>
#define MAX 100
/* Recebe dois n�meros inteiros a e b e devolve esses valores trocados */
void troca(int *a, int *b)//Fun��o responsavel por a troca
{
int aux;//variavel inteira
aux = *a;//aux recebe posi��o de a
*a = *b;
*b = aux;
}
/* Recebe uma matriz de dimens�o mxn de n�meros inteiros
e os �ndices i e j de duas linhas da matriz, troca o
conte�do dessas linhas e mostra a matriz resultante */
int main(void)//Fun��o principal
{
int m, n, i, j, k, A[MAX][MAX];//Declara��o das variaveis inteiras
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
