#include <stdio.h>
int main () {
    int numero;
    int quant; // estou declarando a variavel quantidade de peças vendidas
    quant = 10;
    printf("%i\n", quant);
    printf("Digite um numero inteiro qualquer\n");
    scanf("%i", &numero);
    printf("Voce digitou %i \n", numero);
    printf("%i", quant + numero);
return 0;
}



