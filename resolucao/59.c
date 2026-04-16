// 59)
#include <stdio.h>

int main() {
    int i, n;
    int list[10] = {};
    for(i=0; i<=9; i++) {
        printf("Digite o %dº VALOR: ", i+1);
        scanf("%d", &n);
        if (n < 0) {
            list[i] = n;
        }
    }
    printf("\nOs valores negativos são: \n");
    for (i=0; i<=9; i++) {
        if (list[i] < 0) {
        printf(" %d |", list[i]);
        }
    }
    return 0;
}

