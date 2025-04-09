// 2. Crie uma estrutura representando os alunos do curso de Introdução a Programação de Computadores. 
// A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova e nota da segunda prova. 
// a) Permita ao usuário entrar com os dados de 5 alunos (vetor). 
// b) Encontre o aluno com maior nota da primeira prova.  
// c) Encontre o aluno com maior media geral. 
// d) Encontre o aluno com menor media geral. 
// e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6,0 para aprovação. 

#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
};

int main() {
    struct Aluno alunos[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }
    
    int indiceMaiorNota1 = 0;
    for(int i = 1; i < 5; i++) {
        if(alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }
    }
    printf("\nAluno com maior nota na primeira prova: %s (Nota: %.2f)\n", 
           alunos[indiceMaiorNota1].nome, alunos[indiceMaiorNota1].nota1);
    
    int indiceMaiorMedia = 0, indiceMenorMedia = 0;
    float medias[5];
    
    for(int i = 0; i < 5; i++) {
        medias[i] = (alunos[i].nota1 + alunos[i].nota2) / 2;
        if(medias[i] > medias[indiceMaiorMedia]) {
            indiceMaiorMedia = i;
        }
        if(medias[i] < medias[indiceMenorMedia]) {
            indiceMenorMedia = i;
        }
    }
    
    printf("Aluno com maior média geral: %s (Média: %.2f)\n", 
           alunos[indiceMaiorMedia].nome, medias[indiceMaiorMedia]);
    printf("Aluno com menor média geral: %s (Média: %.2f)\n", 
           alunos[indiceMenorMedia].nome, medias[indiceMenorMedia]);
    
    printf("\nSituação dos alunos:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s: %.2f - %s\n", alunos[i].nome, medias[i],
               medias[i] >= 6.0 ? "Aprovado" : "Reprovado");
    }
    
    return 0;
}