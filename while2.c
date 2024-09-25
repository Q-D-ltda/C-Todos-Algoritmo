#include <stdio.h>


int main() {
    int count, num;
    char resposta;
    count = 1;

    printf("Deseja realizar uma multiplicação? s/n: ");
    scanf(" %c", &resposta);

    while (resposta = 's') {
    printf("Digite um valor para ser multiplicado por 3: ");
    scanf("%d", &num);

    printf("%d * 3 = %d \n", num, (num * 3));
    count--;

    printf("Deseja realizar outra multiplicação? s/n: ");
    scanf(" %c", &resposta);
    }

    return 0;
}
