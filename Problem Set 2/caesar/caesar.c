#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool only_digits(char* arg)
{
    for (int i = 0; i < strlen(arg); i++)
    {
        if (!isdigit(arg[i]))
        {
            return false;
        }
    }
    return true;
}

char* cipher_text(char* text, int key)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];
        if (isupper(c))
        {
            text[i] = ((c - 'A' + key) % 26 + 26) % 26 + 'A';
        }
        else if (islower(c))
        {
            text[i] = ((c - 'a' + key) % 26 + 26) % 26 + 'a';
        }
    }
    return text;
}

int main(int argc, char *argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
    }

    int key = atoi(argv[1]);
    char plaintext[256];

    printf("plaintext:  ");
    scanf("%s", plaintext);
    char* ciphertext = cipher_text(plaintext, key);
    printf("ciphertext: %s\n", ciphertext);
}