#include <stdio.h>
#include <stdlib.h>

int main() {
    int c1[5];
    int c2[5];
    int c3[5];
    int escolha, cont1 = 0, cont2 = 0, cont3 = 0;

    for (int i = 0; i < 5; ++i) {

        printf("Escolha o candidato\n");
        printf("[1] - C1\n");
        printf("[2] - C2\n");
        printf("[3] - C3\n");
        scanf("%d", &escolha);

        if (escolha == 1) {
            if (cont1 < 5) {
                c1[cont1++] = escolha;
            } else {
                printf("Vetor cheio");
            }
        } else if (escolha == 2) {
            if (cont2 < 5) {
                c2[cont2++] = escolha;
            } else {
                printf("Vetor cheio");
            }
        } else if (escolha == 3) {
            if (cont3 < 5) {
                c3[cont3++] = escolha;

            } else {
                printf("Vetor cheio");
            }
        }

    }

    if (cont1 > cont2 && cont1 > cont3) {
        printf("Candidato 1 ganhou com %d de votos\n", cont1);
        for (int i = 0; i < cont1; ++i) {
            printf("%d\n", c1[i]);
        }
        return 0;
    } else if (cont2 > cont1 && cont2 > cont3) {
        printf("Candidato 2 ganhou com %d de votos\n", cont2);
        for (int i = 0; i < cont2; ++i) {
            printf("%d\n", c2[i]);
        }
        return 0;
    } else if (cont3 > cont1 && cont3 > cont2) {
        printf("Candidato 3 ganhou com %d de votos\n", cont3);
        for (int i = 0; i < cont3; ++i) {
            printf("%d\n", c3[i]);
        }
        return 0;
    } else {
        printf("Dois contadores têm o mesmo valor ou deu erro.");
        return 1;
    }
}
