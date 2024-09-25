#include <stdio.h>

int main() {
    int num, somaResultados = 0;
    char resposta;

    resposta = 's';

    while (resposta == 's') {
        printf("Digite um valor para ser multiplicado por 3: ");
        scanf("%d", &num);

        int resultado = num * 3; // Calcula o resultado da multiplicação
        printf("%d * 3 = %d \n", num, resultado);

        somaResultados += resultado; // Adiciona o resultado à soma total

        printf("Deseja realizar outra multiplicação? s/n: ");
        scanf(" %c", &resposta);
    }

    printf("A soma total dos resultados é: %d\n", somaResultados);

    return 0;
}
