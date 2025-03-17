#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to perform Caesar Cipher encryption
void caesarCipher(const char *message, int shift, char *encrypted) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (isupper(ch)) {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (islower(ch)) {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Keep non-alphabet characters unchanged
        else {
            encrypted[i] = ch;
        }
    }
    encrypted[i] = '\0'; // Null-terminate the string
}
