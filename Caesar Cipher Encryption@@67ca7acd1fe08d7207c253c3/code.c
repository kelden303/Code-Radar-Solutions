// Your code here...
#include <stdio.h>
#include <string.h>

// Function to encrypt a message using Caesar Cipher
void caesarCipherEncrypt(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        // Encrypt uppercase letters
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + shift) % 26 + 'A';
        }
        // Encrypt lowercase letters
        else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' + shift) % 26 + 'a';
        }
        // Non-alphabetic characters remain unchanged
    }
}

