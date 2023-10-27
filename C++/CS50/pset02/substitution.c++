#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    char *key = argv[1];

    // Verifica se a chave tem exatamente 26 caracteres
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Verifica se a chave contém apenas letras e se não há repetições
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain only alphabetic characters.\n");
            return 1;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (toupper(key[i]) == toupper(key[j]))
            {
                printf("Key must not contain duplicate characters.\n");
                return 1;
            }
        }
    }

    char plaintext[100];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 'A';
            printf("%c", isupper(key[letter]) ? key[letter] : key[letter] - 'a' + 'A');
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 'a';
            printf("%c", islower(key[letter]) ? key[letter] : key[letter] - 'A' + 'a');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}
