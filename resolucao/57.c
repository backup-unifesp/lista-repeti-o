// 57)
#include <stdio.h>

int main() {
    int numeros[10];
    int i, j, temp;

    for(i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] > 10 || numeros[i] < 1) {
            printf("O número deve estar no intervalo de 1-10...");
            i--;
        }
    }

    // (maior → menor)
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] < numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // resultado
    printf("\nNúmeros do maior para o menor:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
