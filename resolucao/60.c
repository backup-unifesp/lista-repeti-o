// 60)
#include <stdio.h>

int main() {
    int i, n;
    int list[10] = {};
    for(i=0; i<=9; i++) {
        printf("Digite o %dº VALOR: ", i+1);
        scanf("%d", &n);
        list[i] = n;
    }
    printf("\nOs valores que ESTÃO no intervalo de 10-20 são: \n");
    for (i=0; i<=9; i++) {
        if (list[i]>=10 && list[i] <=20) {
            printf(" %d |", list[i]);
        }
    }
    printf("\nOs valores que NÃO ESTÃO no intervalo de 10-20 são: \n");
    for (i=0; i<=9; i++) {
        if (list[i]<10 || list[i]>20) {
            printf(" %d |", list[i]);
        }
    }
    return 0;
}
