// 56)
#include <stdio.h>

int main() {
    int i, n;
    printf("Digite o número: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %2d\n", n, i, n * i);
    }
    return 0;
}
