#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: ./caesar key" << std::endl;
        return 1;
    }

    std::string key = argv[1];

    for (int i = 0; i < key.length(); i++)
    {
        if (!isdigit(key[i]))
        {
            std::cout << "Usage: ./caesar key" << std::endl;
            return 1;
        }
    }

    std::string plaintext;
    std::cout << "plaintext: ";
    std::getline(std::cin, plaintext);

    int k = std::stoi(key);
    std::cout << "ciphertext: ";

    for (char c : plaintext)
    {
        if (isupper(c))
        {
            char encrypted = 'A' + (c - 'A' + k) % 26;
            std::cout << encrypted;
        }
        else if (islower(c))
        {
            char encrypted = 'a' + (c - 'a' + k) % 26;
            std::cout << encrypted;
        }
        else
        {
            std::cout << c;
        }
    }
    std::cout << std::endl;
}
