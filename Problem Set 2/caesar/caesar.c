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
            text[i] = 'A' + (c - 'A' + key) % 26;
        }
        else if (islower(c))
        {
            text[i] = 'a' + (c - 'a' + key) % 26;
        }
    }
    return text;
}

int main(int argc, char *argv[])
{
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    char plaintext[256];

    printf("plaintext:  ");
    scanf("%s", plaintext);
    char* ciphertext = cipher_text(plaintext, key);
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}