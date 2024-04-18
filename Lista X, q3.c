/*Elabore um programa que solicita e armazena o nome e três notas de cinco alunos
em uma matriz 5 x 3. Por fim, o programa deve exibir uma mensagem com o nome
e a média aritmética de cada aluno.*/
#include <stdio.h>
#include <locale.h>
int main(){
    const int NUM_ALUNOS = 5;
    const int NUM_NOTAS = 3;
    char nomes[NUM_ALUNOS][50]; 
    float notas[NUM_ALUNOS][NUM_NOTAS];
    int i, j;
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", nomes[i]);
        for (j = 0; j < NUM_NOTAS; j++){
            printf("Digite a nota %d do aluno %s: ", j+1, nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }
    printf("\nMédia aritmética de cada aluno:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;
        for (j = 0; j < NUM_NOTAS; j++) {
            soma += notas[i][j];
        }
        float media = soma / NUM_NOTAS;
        printf("Aluno: %s, Média: %.2f\n", nomes[i], media);
    }
    return 0;
}
