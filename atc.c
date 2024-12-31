#include <stdio.h>

void calcularAreaTriangulo(void);

int main() {
    calcularAreaTriangulo();
    return 0;
}

void calcularAreaTriangulo(void) {
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo eh: %.2f\n", area);
}

