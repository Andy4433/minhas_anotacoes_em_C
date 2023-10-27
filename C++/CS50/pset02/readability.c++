#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main()
{
    std::string text;

    std::cout << "text: ";
    std::getline(std::cin, text); // Usando getline para capturar a linha inteira.
    std::cout << std::endl << text << std::endl;

    int letters = 0;
    int words = 1; // Começamos com 1 palavra.
    int sentences = 0;

    for (char c : text)
    {
        if (std::isalpha(c))
        {
            letters++;
        }
        if (std::isspace(c))
        {
            words++;
        }
        if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    // Verificar se a última palavra foi contada corretamente.
    if (!std::isalnum(text[text.size() - 1]))
    {
        words--;
    }

    std::cout << letters << " letters" << std::endl;
    std::cout << words << " words" << std::endl;
    std::cout << sentences << " sentences" << std::endl;

    float L = (static_cast<float>(letters) / words) * 100;
    float S = (static_cast<float>(sentences) / words) * 100;
    float index = (0.0588 * L - 0.296 * S - 15.8);

    int grade = static_cast<int>(std::round(index));

    if (grade < 1)
    {
        std::cout << "Before Grade 1" << std::endl;
    }
    else if (grade >= 16)
    {
        std::cout << "Grade 16+" << std::endl;
    }
    else
    {
        std::cout << "Grade: " << grade << std::endl;
    }

    return 0;
}
