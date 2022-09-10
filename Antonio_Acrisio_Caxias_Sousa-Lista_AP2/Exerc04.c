/*Crie um algoritmo para armazenar as quatro notas de uma turma de N alunos, tal
que 1 = N = 100. Como resultado, o algoritmo deve apresentar um relatório
informando:
a. A média de cada aluno;
b. A prova em que o aluno teve MENOR nota;
c. Quais alunos foram aprovados por média. Assuma que a média seja 7,0.
OBS: Utilize uma função para cada item.*/

#include <stdio.h>

int main() {
  int n, i, Aprovados, Reprovados;
  float Nota1, Nota2, Nota3,Nota4 ,Media, MediaDaClasse;
  printf("Digite o numero de alunos: ");
  scanf("%d", &n);
  for(i=0;n>100;i++){
  	  printf("Digite o numero de alunos: ");
  scanf("%d", &n);
  }

  /* inicializacoes */
  Aprovados = 0;
  Reprovados = 0;
  MediaDaClasse = 0.0;

  for (i = 1; i <= n; i++) {
    printf("Digite as 4 notas do aluno %d: ", i);
    scanf("%f", &Nota1);
    scanf("%f", &Nota2);
    scanf("%f", &Nota3);
    scanf("%f", &Nota4);
  
    Media = (Nota1 + Nota2 + Nota3+Nota4) / 4;
    printf("A media do aluno %d foi %f\n", i, Media);
      
    MediaDaClasse = MediaDaClasse + Media;
    if (Media >= 7.0)
      Aprovados = Aprovados + 1;
    else
      Reprovados = Reprovados + 1;
  }
  MediaDaClasse = MediaDaClasse / n;
  printf("O numero de alunos aprovados foi %d\n", Aprovados);
  printf("O numero de alunos reprovados foi %d\n", Reprovados);
  printf("A media da classe foi %f\n", MediaDaClasse);

  return 0;
}

