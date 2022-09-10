/*Dadas N datas dd/mm/aaaa, com 1 < N < 100, e uma data de referência d, verifique
qual das N datas é mais próxima à data d.*/
#include <stdio.h>
 int main(void)
 {
 struct {
 int dia;
 int mes;
 int ano;
 } data, prox;
 scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
 prox = data;
 prox.dia++;
 if (prox.dia > 31 ||
 (prox.dia == 31 && (prox.mes == 4 || prox.mes == 6 ||
 prox.mes == 9 || prox.mes == 11)) ||
 (prox.dia >= 30 && prox.mes == 2) ||
 (prox.dia == 29 && prox.mes == 2 && (prox.ano % 400 != 0 &&
 prox.ano % 4 != 0)) ) {
 prox.dia = 1;
 prox.mes++;
 if (prox.mes > 12) {
 prox.mes = 1;
 prox.ano++;
 }
 }
 printf("%02d/%02d/%02d\n", prox.dia, prox.mes, prox.ano);
 return 0;
 }
