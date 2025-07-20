#include<stdio.h>
#include <math.h>

void calcular_combustivel(int a, int b) {
    int resultado = a * a + b * b;
    verificar_estabilidade(a, b, resultado);
}

void verificar_estabilidade(int a, int b, int valor_anterior) {
    int menor = (a < b) ? a : b;
    int resultado = valor_anterior - 2 * menor;
    ajustar_trajetoria(a, b, resultado);
}

void ajustar_trajetoria(int a, int b, int valor_anterior) {
    int diferenca = a - b;
    int resultado = valor_anterior * diferenca;
    calcular_peso_salto(a, b, resultado);
}

void calcular_peso_salto(int a, int b, int valor_anterior) {
    float media = (a + b) / 2.0;
    float resultado_float;
    if (media != 0) {
        resultado_float = valor_anterior / media;
    } else {
        resultado_float = 0;
    }
    codificar_dados((int)fabs(resultado_float));
}

void codificar_dados(int valor_anterior) {
    int soma_digitos = 0;
    while (valor_anterior > 0) {
        soma_digitos += valor_anterior % 10;
        valor_anterior /= 10;
    }
    finalizar_lancamento(soma_digitos);
}

void finalizar_lancamento(int codigo) {
    printf("Salto autorizado com codigo %d\n", codigo);
}

int main() {
    int a, b;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    calcular_combustivel(a, b);
    return 0;
}
