//Aluno: Antonio Acrisio Caxias Sousa
//Matricula:519391

/*2°- Dados uma frase e um caractere, determine o número de vezes que o caractere
ocorre na frase.*/

#include <stdio.h>
#define tam 255 //Definimos o tamanho do vetor que ira armazenar os caracteres.
int conta_a (char str [ ]){//Inicio da função responsável por contar as vogais no vetor
int i, count=0; //Declaração das variaveis do contador(for)
	printf("Informe o caracter que deseja buscar na expressao :\n"); //Mensagem de interação com usuário, solicita a inserção do caracter a ser buscado.
char qnt ; //Criação da variavel que ira armazenar o caracter/string a ser buscado .
scanf("%s",&qnt);//Realiza a leitura  da variavel acima
//for(i=0;i<99;i++){(For para caso queira limitar a quantidade de caracter)
for(i=0; str[i]!='\0'; i++){
//Inicio da verificação das vogais OBS: poderia ser utilizado um if, porém com suwitch fica mais fluido.
	if (str[i]== qnt)
	count++;
 }
return count;
   }

// }

int main() {//Inicio da função que ira ler e armazenar os caracteres informados.
		
char vet[tam];//criação do vetor que ira armazenar os caracters

printf("Informe uma string de ate 100 caracteres :\n");
scanf("%[^\n]", vet);// com ^\n conseguimos processar a verificação de vogais em toda frase, mesmo com espaçõs informados por o usuário.
printf("Existem %d caracteres na expressao \n", conta_a(vet));// Apresentamos o resultado, chamando a função de contagem para o vetor informado.

return 0;
}
