#include <stdio.h>
#include <string.h>

void copia_string(char StringB[], const char StringA[]) {
    strcpy(StringB, StringA);
}

int main() {
    char StringB[100];
    const char StringA[] = "Esse é o conteúdo que vai para a variável.";

    copia_string(StringB, StringA);
    printf("O conteudo da String B é: %s\n", StringB);

    return 0;
}