// 63)
#include <stdio.h>

int main() {
    int i;
    float n;
    float s = 0;
    float list[10] = {};
    for(i=0; i<=9; i++) {
        printf("Digite o %d número: ", i+1);
        scanf("%f", &n);
        s += n;
        list[i] = n;
    }
    printf("A soma total dos 10 números é: %.2f", s);
}
