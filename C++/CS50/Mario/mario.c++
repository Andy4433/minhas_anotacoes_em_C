#include <stdio.h>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa usa classe de strig padrao C++



int main (void)

{
    int height, row, column, space;
    do
    {
        cout << "enter heigth here: ";
        cin >> height;
    }
    while (height < 1 );
    for  (row=0; row < height; row++)
    {
        for(space=0; space < height- row -1;space++)
        {
            printf(" ");
        }
        for(column=0; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for(column=0; column<=row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
