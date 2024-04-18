/* Crie um programa que solicita e armazena nove valores inteiros em uma
matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa.*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
    int matriz[3][3];
    int i, j;
    printf("Digite os nove valores inteiros para preencher a matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nElementos da matriz na ordem inversa:\n");
    for(i = 2; i >= 0; i--) {
        for(j = 2; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
