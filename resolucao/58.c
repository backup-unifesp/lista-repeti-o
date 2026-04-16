// 58)
#include <stdio.h>

int main() {
    int numeros[10];
    int j, temp;
    int i = 0;

    while(i<10) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] > 10 || numeros[i] < 1) {
            printf("O número deve estar no intervalo de 1-10...");
            i--;
        }
        i++;
    }

    // (menor → maior)
    i = 0;
    while(i<10) {
        for(j = i + 1; j < 10; j++) {
            if(numeros[i] > numeros[j]) {
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
        i++;
    }

    // resultado
    printf("\nNúmeros do menor para o maior:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
