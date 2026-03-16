#include <stdio.h>
#define MAXLINHA 1000

int lelinha(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copia(char origem[], char destino[]) {
    int i = 0;
    while ((destino[i] = origem[i]) != '\0') {
        ++i;
    }
}

int main() {
    int tam;
    int max = 0;
    char linha[MAXLINHA];
    char guarda[MAXLINHA];

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        if (tam > max) {
            max = tam;
            copia(linha, guarda);
        }
    }

    if (max > 0) {
        printf("Maior linha:\n%s", guarda);
    }

    return 0;
}
