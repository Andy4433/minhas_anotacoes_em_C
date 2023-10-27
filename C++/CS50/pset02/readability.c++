
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
using std::string;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

string text;

int main(void)
{
    cout << "text: ";
    cin >> text;
    cout << endl << text;

    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            letters++;
    }
    printf("%i letters\n", letters);

    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
            words++;
    }
    printf("%i words\n", words);

    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '-' || text[i] == '!' || text[i] == '?' || text[i] == ',')
            sentences++;
    }
    printf("%i sentences\n", sentences);

    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;

    int index = round(calculation);
    if (index < 1)
    {
        printf("before grade 1 \n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("grade 16+\n");
        return 0;
    }
    else
    {
        printf("grade: %i\n", index);
    }
}