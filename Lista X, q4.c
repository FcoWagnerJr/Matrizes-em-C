/*Elabore programa que solicita e armazena oito números reais em uma matriz 4 × 2,
denominada de A. Construa outra matriz, denominada de B, do mesmo tipo e
tamanho de A, e com os mesmos elementos armazenados em A, porém de forma
invertida. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo
elemento de A passa a ser o penúltimo de B e assim por diante. Ao final, o
programa deve exibir o conteúdo de A e B.*/
#include<stdio.h>
#include<locale.h>
	int main (){
		setlocale (LC_ALL, "portuguese");
    float A[4][2];
    float B[4][2];
    printf("Digite oito números para a matriz A:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor de A[%i][%i]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            B[i][j] = A[3 - i][1 - j];
        }
    }
    printf("\nMatriz A:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.0f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B (invertida):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.0f ", B[i][j]);
        }
        printf("\n");
    }
    return (0);
}
