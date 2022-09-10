//Aluno: Antonio Acrisio Caxias Sousa
//Matricula:519391

/*3°- Elabore um algoritmo C para efetuar a correção das provas dos alunos da disciplina
de Programação Computacional do curso de Engenharia da Computação da UFC.
A prova é composta por 10 questões, onde cada uma vale 1,0 ponto. Primeiramente,
o gabarito da prova deve ser lido. Em seguida, devem ser lidas as respostas de cada
aluno. Assuma que a turma possua N alunos, tal que 1 < N < 100, calcule e imprima
o número e a nota de cada aluno. (Considere que o gabarito é formado por apenas
caracteres a, b, c ou d). */


#include <stdio.h>
#define MAX 100

int main() {
  int n, i, aluno, pontos; //Variaveis inteiras        
  char gabarito[10],  //Vetor char, armazena os itens do gabarito
       resp[5];    //Vetor char, armazena os itens de cada aluno  
  
  
  
  
  printf("Informe o numero de alunos: (De 1 a 100) ");//Interação com usuário, solicita a quantidade de alunos(No maximo ate 100)
  scanf("%d", &n);//Realiza a leitura da quantidade de alunos

for(i=0;n>100;i++){//Em caso da quantidade informada ser maior que 100 alunos a aplicação solicita que seja informado uma quantidade dentro do permitido !
	printf("Informe o numero de alunos: (De 1 a 100) ");//Interação com usuário, solicita a quantidade de alunos(No maximo ate 100)
  scanf("%d", &n);//Realiza a leitura da quantidade de alunos
}

  printf("Informe o gabarito da prova (10 itens - Somente Aa,Bb,Cc,Dd): ");//Solicita ao usuário o gabarito da prova, neste caso limitado em 10 caracter/questão
  for (i = 0; i < 10; i++) {
  
    scanf(" %c", &gabarito[i]); //Realiza a leitura do gabarito e armazena no vetor gabarito.
}
for(i=0;gabarito[i]=='E'||gabarito[i]=='e'||gabarito[i]=='F'||gabarito[i]=='f'||gabarito[i]=='i'||
gabarito[i]=='I'||gabarito[i]=='J'||gabarito[i]=='j'||gabarito[i]=='K'||gabarito[i]=='k'||
gabarito[i]=='L'||gabarito[i]=='l'||gabarito[i]=='M'||gabarito[i]=='m'||gabarito[i]=='N'||
gabarito[i]=='N'||gabarito[i]=='O'||gabarito[i]=='o'||gabarito[i]=='P'||
gabarito[i]=='p'||gabarito[i]=='Q'||gabarito[i]=='q'||gabarito[i]=='R'||
gabarito[i]=='r'||gabarito[i]=='S'||gabarito[i]=='s'||gabarito[i]=='T'||
gabarito[i]=='t'||gabarito[i]=='U'||gabarito[i]=='u'||gabarito[i]=='V'||
gabarito[i]=='v'||gabarito[i]=='W'||gabarito[i]=='w'||gabarito[i]=='X'||
gabarito[i]=='x'||gabarito[i]=='Y'||gabarito[i]=='y'||gabarito[i]=='Z'||
gabarito[i]=='z';i++){
	  printf("Informe o gabarito da prova (10 itens - Somente Aa,Bb,Cc,Dd): ");//Solicita ao usuário o gabarito da prova, neste caso limitado em 10 caracter/questão
  for (i = 0; i < 10; i++) {
  
    scanf(" %c", &gabarito[i]); //Realiza a leitura do gabarito e armazena no vetor gabarito.
}
}
  for (aluno = 1; aluno <= n; aluno++) {//laço para percorrer o vetor, receber as respostas individuais dos alunos, comparar com o gabarito e retornar as notas
    pontos = 0;
    printf("Informe as respostas do aluno %d: ", aluno);
    for (i = 0; i < 10; i++) {
      scanf(" %c", &resp[i]);  /* atencao para o espaco em branco */
      if (resp[i] == gabarito[i])
        pontos = pontos + 1;
    }
    printf("O aluno %d fez %d pontos\n", aluno, pontos);//Exibe a quantidade de pontos que o aluno fez
  }

  return 0; 
}

