// 61)
#include <stdio.h>

int main() {
    int i;
    float n;
    float r = 0;
    for(i=0; i<=9; i++) {
        printf("Digite o %dº VALOR: ", i+1);
        scanf("%f", &n);
        r += n;
    }
    printf("A média aritmética dos valores informados é %.2f", r/i);
    return 0;
}
