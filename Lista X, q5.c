/*Crie um programa que solicita e armazena n × m números inteiros em uma matriz n
× m, denominada de A, onde n e m também devem ser fornecidos pelo usuário.
Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, onde cada
elemento de B deve ser definido pela multiplicação do elemento correspondente de
A por 3, ou seja, B[i][j] deve ser igual a A[i][j] * 3, onde i e j correspondem aos
índices das matrizes. Dessa forma, se A = [
3 2 1
4 0 5
8 6 9
], teremos B = [
9 6 3
12 0 15
24 18 27
].
Ao final, o programa deve exibir o conteúdo de A e B.*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
    int n, m;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &n);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &m);
    int A[n][m];
    int B[n][m];
    int i, j;
    printf("Digite os elementos da matriz A (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            B[i][j] = A[i][j] * 3;
        }
    }
    printf("\nMatriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
