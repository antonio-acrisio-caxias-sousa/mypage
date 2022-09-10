//Aluno: Antonio Acrisio Caxias Sousa
//Matricula:519391

/*1°- Elabore um único código em C para ler um vetor de números inteiros e que possua
uma função para cada item abaixo:
a. Mostrar cada elemento do vetor;
b. Calcular e mostrar a soma dos elementos de um vetor;
c. Calcular e mostrar o maior elemento do vetor;
d. Calcular e mostrar o menor elemento do vetor;
e. Calcular e mostrar o maior e o menor elemento do vetor;
f. Exibir cada elemento cujo valor seja maior que 50;
g. Exibir cada elemento cujo valor seja par;
h. Calcular e exibir a quantidade de elementos pares de um vetor.*/

#include <stdio.h>
#define MAX 100
//OBS(Matrizes são Vetores bidimensionais)

// Função que mostra todos os elementos 
int mmatriz(int mat[][MAX], int n){ //Inicio da função / argumentos
	int i, j;//Declaração de variaveis inteiras
	for(i = 0; i<n; i++){// Laço de repetição para percorrer a matriz(linhas)
		for (j = 0; j<n; j++){//Laço de repetição para percorrer a matriz(colunas)
			printf("%d", mat[i][j]);//Exibe o resultado 
		}
		printf("\n");
	}
}

// Calcula a soma dos elementos 
int smatriz(int mat[][MAX], int n){
	int i, j, soma=0;
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			soma = soma + mat[i][j];//Realiza a soma	
		}
	}
	printf("A soma dos elementos eh %d\n", soma);
}

// Função que calcula e mostra o maior elemento 
int maelemento(int mat[][MAX], int n){
	int i, j, maior;
	maior = mat[0][0];
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			if (mat[i][j] > maior)
				maior = mat[i][j];
		}
	}
	return maior;
}

// Função que calcula e mostra o menor elemento 
int meelemento(int mat[][MAX], int n){
	int i, j, menor;
	menor = mat[0][0];
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			if (mat[i][j] < menor)
				menor = mat[i][j];
		}
	}
	return menor;
}

// Função que calcula e mostra o maior e o menor elemento 
int MaeMeelementos(int mat[][MAX], int n){
	int maior, menor;
	maior = maelemento(mat, n);
	menor = meelemento(mat, n);
	printf("O maior elemento eh %d e o menor elemento eh %d\n", maior, menor);
}

// Função que exibe os elementos da matriz acima de 50
int acima(int mat[][MAX], int n){
	int i, j;
	printf("Os elementos acima de 50 sao: ");
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			if(mat[i][j] > 50)
				printf("%d\t", mat[i][j]);	
		}
	}
}

// Função que exibe os elementos pares
int paelementos(int mat[][MAX], int n){
	int i, j;
	printf("\nOs elementos pares sao: ");
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			if((mat[i][j] % 2) == 0)
				printf("%d\t", mat[i][j]);	
		}
	}
}

// Função que calcula e exibe o numero de elementos pares 
int qntpaelementos(int mat[][MAX], int n){
	int i, j, cont = 0;
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			if((mat[i][j] % 2) == 0)
				cont++;	
		}
	}
	printf("\nA quantidade de elementos pares eh %d\n", cont);
}
//Função principal, realiza leitura dos elementos e armazena 
int main(void){
	int i, j, n, mat[MAX][MAX], maior, menor;
	
	printf("Digite o tamanho N \n");
	scanf("%d", &n);
	printf("Digite os valores \n");
	for(i = 0; i<n; i++){
		for (j = 0; j<n; j++){
			scanf("%d", &mat[i][j]);	
		}
	}
	
	mmatriz(mat, n);//Mostra os elementos 
	smatriz(mat, n);//Soma 
	maior = maelemento(mat, n);//Maior elemento 
	printf("O maior elemento  eh %d\n", maior);
	menor = meelemento(mat, n);//Menor elemento 
	printf("O menor elemento  eh %d\n", menor);
	MaeMeelementos(mat, n);//Carrega a função que mostra o maior e menor elemento
	acima(mat, n);//Numeros acima de 50
	paelementos(mat, n);//Numeros Pares
	qntpaelementos(mat,n);//Quantidade de numeros pares
	
	return 0;
}
