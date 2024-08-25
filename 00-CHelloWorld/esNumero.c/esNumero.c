#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool esNumero(char c) {
    return isdigit(c);
}

int main() {
    char input[100];
    bool todosSonNumeros = true; 

    printf("Ingrese un string: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len-1] == '\n') {
        input[len-1] = '\0';
    }

    for (int i = 0; i < strlen(input); i++) {
        if (!esNumero(input[i])) {
            todosSonNumeros = false;
            break;
        }
    }

    if (todosSonNumeros) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
