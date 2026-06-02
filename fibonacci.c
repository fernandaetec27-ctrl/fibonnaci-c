#include <stdio.h>

int fibonacci(int n);

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Fibonacci = %d\n", fibonacci(numero));

    printf("Criado por Ana");

    return 0;
}
