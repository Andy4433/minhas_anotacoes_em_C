#include <stdio.h>

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // o programa usa classe de strig padrao C++


int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_cents();

    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    int coins = quarters + dimes + nickels + pennies;

    printf("%i moedas\n", coins);
}
int get_cents(void)
{
    int cents;
    do
    {
        cout << "cents owed: ";
        cin >> cents;
    }
    while (cents < 0);
    return cents;
}
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickels++;
    }
    return nickels;
}
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennies++;
    }
    return pennies;
}