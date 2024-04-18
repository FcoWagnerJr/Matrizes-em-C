/*Faça um programa que solicita e armazena seis números inteiros em uma
matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra
matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	  int A[2][3], B[2][3], soma[2][3];
    printf("Digite os elementos da matriz A (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Digite os elementos da matriz B (2x3):\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            soma[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSoma das matrizes A e B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    return (0);
}
