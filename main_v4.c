#include <stdio.h>

int main () {
    int n;
    printf("Quantas notas deseja digitar?");
    scanf("%d", &n);

    while (n <= 0){
        printf("Erro!\nDigite um numero positivo: ");
        scanf("%d", &n);
    }

    float nota[n];
    float soma = 0;

    for (int i = 0; i < n; i++) {
    printf("Digite a %d nota: ", i + 1);
    scanf("%f", &nota[i]);

    while (nota[i] < 0 || nota[i]> 10){
        printf("Numero invalido, digite novamente entre 0 e 10: ");
        scanf("%f", &nota[i]);
    }
    
    soma += nota[i];
    }
    float media = soma / n; 
    printf("===== RESULTADO =====\n");
    printf("Media das notas: %.2f\n", media);


    if (media > 6.0){
        printf("Aluno aprovado!\n");
    }
    else {
        printf("Aluno reprovado!\n");
    }
    float maior = nota[0];

    for (int i = 1; i < n; i++){
        if (nota[i] > maior){
            maior = nota[i];
        }
    }
    float menor = nota [0];
    for (int i = 1; i < n; i++){
        if (nota[i] < menor){
            menor = nota[i];
        }
    }
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    return 0;
}    
