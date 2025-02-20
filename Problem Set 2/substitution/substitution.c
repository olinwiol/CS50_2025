#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool valid_key(char* key)
{
    int length = strlen(key);
    if (length != 26)
    {
        return false;
    }

    bool seen[26] = {false};
    for (int i = 0; i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }

        int index = toupper(key[i]) - 'A';
        if (seen[index])
        {
            return false;
        }
        seen[index] = true;
    }
    return true;
}

char* substitution(char* text, char* key)
{
    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            text[i] = toupper(key[text[i] - 'A']);
        }
        else if (islower(text[i]))
        {
            text[i] = tolower(key[text[i] - 'a']);
        }
        else
        {
            text[i] = text[i];
        }
    }
    return text;
}

int main(int argc, char *argv[])
{
    if (argc != 2 || !valid_key((argv[1])))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    char plaintext[256];

    printf("plaintext:  ");
    scanf("%s", plaintext);
    char* ciphertext = substitution(plaintext, argv[1]);
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}