#include <stdio.h>

int main() {
    int i, num, fatorial = 1;

    printf("Digite um numero para fazer o calculo fatorial: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {

        fatorial *= i;
    }

    printf("Fatorial: %d\n", fatorial);

    return 0;
}