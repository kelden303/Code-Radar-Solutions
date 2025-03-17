#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char message[], int shift) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        if (isalpha(message[i])) {
            char base = islower(message[i]) ? 'a' : 'A';
            message[i] = (message[i] - base + shift) % 26 + base;
        }
    }
}

