#include <stdio.h>

int main () {
    int n;
    printf("Quantas notas deseja digitar?");
    scanf("%d", &n);

    float nota[n];
    float soma = 0;

    for (int i = 0; i < n; i++) {
    printf("Digite a %d nota: ", i + 1);
    scanf("%f", &nota[i]);
    soma += nota[i];
    }
    float media;
    media = soma / n;
    printf("A media das notas e: %.2f\n", media);

    if (media > 6.0){
        printf("Aluno aprovado!");
    }
    else {
        printf("Aluno reprovado!");
    }
    return 0;
}    
