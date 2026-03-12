#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4, nota5;
    float media;

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:");
    scanf("%f", &nota3);

    printf("Digite a quarta nota:");
    scanf("%f", &nota4);

    printf("Digite a quinta nota:");
    scanf("%f", &nota5);

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A media das notas e: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
    }
    else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
