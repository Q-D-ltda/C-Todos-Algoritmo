/* Elaborar um programa que leia dez valores numéricos reais e apresente
no final a soma e a média dos valores lidos.*/

#include <stdio.h>

int main() {
    int num, soma = 0, count = 1;

    printf("Soma de dez valores. \n");

    while (count <= 10) {
        printf("Digite um valor: ");
        scanf("%d", &num);

        soma += num;
        count++;

    }

    printf("A média total é: %d \n",  (soma / 10));
    printf("A soma total dos resultados é: %d\n", soma);

    return 0;
}
