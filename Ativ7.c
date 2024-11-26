/* Leia uma string e um caractere, e conte quantas vezes o caractere aparece na string. */

#include <stdio.h>

int contar(char string[], char caractere) {
    int cont = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            count++;
        }
    }
    return cont;
}

int main() {
    char string[100];
    char caractere;
    
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int vezes = contar(string, caractere);
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, vezes);
}
