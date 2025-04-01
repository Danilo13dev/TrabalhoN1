#include <stdio.h>
#include <stdlib.h>

void obter_fracoes();
void somar_fracoes(int x, int y, int u, int v);
void subtrair_fracoes(int x, int y, int u, int v);
void multiplicar_fracoes(int x, int y, int u, int v);
void dividir_fracoes(int x, int y, int u, int v);

// Vari�veis globais para armazenar as fra��es
int a, b, c, d;

int main() {
    char r;

    while (1) {
        system("cls");  // Limpa a tela (para Windows)
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("9. Fim\n");
        printf("O que deseja? ");
        scanf(" %c", &r);  // L� a op��o do usu�rio

        // Se o usu�rio escolher 9, encerra o programa
        if (r == '9') {
            printf("\nEncerrando o programa...\n");
            break;
        }

        obter_fracoes();  // Obt�m os valores das fra��es

        // Executa a opera��o escolhida
        switch (r) {
            case '1': somar_fracoes(a, b, c, d);
            break;
            case '2': subtrair_fracoes(a, b, c, d);
            break;
            case '3': multiplicar_fracoes(a, b, c, d);
            break;
            case '4': dividir_fracoes(a, b, c, d);
            break;
            default: printf("\nOpcao invalida!\n");
            break;
        }

        printf("\nPressione qualquer tecla para continuar...");
        getchar();
        getchar();
    }

    return 0;
}
// Fun��o para obter os valores das fra��es do usu�rio
void obter_fracoes() {
    printf("\nDigite o numerador da primeira fracao: ");
    scanf("%d", &a);
    printf("Digite o denominador da primeira fracao: ");
    scanf("%d", &b);
    printf("Digite o numerador da segunda fracao: ");
    scanf("%d", &c);
    printf("Digite o denominador da segunda fracao: ");
    scanf("%d", &d);
}

void somar_fracoes(int x, int y, int u, int v) {
    int num = (x * v) + (u * y);
    int den = y * v;
    printf("\nResultado da soma: %d/%d\n", num, den);
}

void subtrair_fracoes(int x, int y, int u, int v) {
    int num = (x * v) - (u * y);
    int den = y * v;
    printf("\nResultado da subtracao: %d/%d\n", num, den);
}

void multiplicar_fracoes(int x, int y, int u, int v) {
    int num = x * u;
    int den = y * v;
    printf("\nResultado da multiplicacao: %d/%d\n", num, den);
}

void dividir_fracoes(int x, int y, int u, int v) {
    if (u == 0) {  // Verifica se o denominador da segunda fra��o � zero
        printf("\nErro: divisao por zero!\n");
        return;
    }
    int num = x * v;
    int den = y * u;
    printf("\nResultado da divisao: %d/%d\n", num, den);
}

