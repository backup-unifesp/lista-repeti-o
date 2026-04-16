// 62)
#include <stdio.h>

int main() {
    int i, qnt;
    float n;
    float m = 0;
    printf("Quantos alunos existem na turma? ");
    scanf("%d", &qnt);
    for (i=1; i<=qnt; i++) {
        printf("Qual a nota do %dº aluno? ", i);
        scanf("%f", &n);
        m += n;
    }
    printf("A média aritmética dos %d alunos é %.2f", qnt, m/qnt);
}
