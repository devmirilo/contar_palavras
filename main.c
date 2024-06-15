#include <stdio.h>

int contarPalavras(char str[]) {
    int contador = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            if (str[i + 1] == ' ' || str[i + 1] == '\0') {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    char str[100];
    printf("Digite um texto: ");
    gets(str);
    int palavras = contarPalavras(str);
    printf("Numero de palavras: %d\n", palavras);
    return 0;
}

