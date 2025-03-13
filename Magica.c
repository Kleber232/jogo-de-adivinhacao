#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int mat[4][4];
    int numprov1[4], numprov2[4], numprov3[4], numprov4[4];
    int l, c, coluna, linha;
    char resposta[4];

    do {
        printf("Por favor, digite 16 numeros DIFERENTES para comecarmos:\n");
        for (l = 0; l < 4; l++) {
            for (c = 0; c < 4; c++) {
                scanf("%d", &mat[l][c]);
            }
        }

        // Armazena os valores das colunas em vetores de numeros provaveis(apos o usuario escolher a primeira coluna,queremos ter separado quais o numeros provaveis que ele pensou)
        for (l = 0; l < 4; l++) {
            numprov1[l] = mat[l][0];
            numprov2[l] = mat[l][1];
            numprov3[l] = mat[l][2];
            numprov4[l] = mat[l][3];
        }

        // Exibe a matriz original
        printf("\nAgora escolha mentalmente um numero:\n");
        for (l = 0; l < 4; l++) {
            for (c = 0; c < 4; c++) {
                printf("%d ", mat[l][c]);
            }
            printf("\n");
        }

        printf("\nEscolheu? Agora me diga em que coluna esta o numero que voce escolheu (1-4): ");
        scanf("%d", &linha);
        linha--; // nescessario pelo fato de C ter essa esquisitice de começar com 0

        // Exibe a matriz original só que tranversa para enganar o usuário pensando que os numeros então embaralhados
        printf("\nDigite novamente a coluna do numero que voce escolheu (1-4):\n");
        for (c = 0; c < 4; c++) {
            for (l = 0; l < 4; l++) {
                printf("%d ", mat[l][c]);
            }
            printf("\n");
        }
        scanf("%d", &coluna);
        coluna--; // Ajuste para índice de array

        // Descobre o número escolhido
        int escolhido;
        if (linha == 0) escolhido = numprov1[coluna];
        else if (linha == 1) escolhido = numprov2[coluna];
        else if (linha == 2) escolhido = numprov3[coluna];
        else if (linha == 3) escolhido = numprov4[coluna];
        else {
            printf("Coluna invalida!\n");
            continue;
        }

        printf("\nO numero que voce escolheu e: %d\n", escolhido);

        printf("\nQuer jogar de novo? (sim/nao): ");
        scanf("%s", resposta);
    } while (strcmp(resposta, "nao") != 0);

    return 0;
}
