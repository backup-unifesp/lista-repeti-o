// 54)
#include <stdio.h>

int main() {
    int count, n;
    while(1) {
        printf("\nDigite o último valor: ");
        scanf("%d", &n);
        if (n>0) {
            for(count=1; count<=n; count++) {
                printf("| %d ", count);
        }
        break;
        }
        else {
            printf("O valor deve ser maior que zero...\n");
        }
    }
    return 0;
}
